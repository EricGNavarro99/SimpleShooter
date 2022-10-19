// Created by Eric G. Navarro
#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

AGun::AGun()
{
	PrimaryActorTick.bCanEverTick = true;

	CreateComponents();
}

void AGun::PullTrigger()
{
	SpawnShootEffect();
	SpawnBulletImpactEffect();

}

void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::CreateComponents()
{
	_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(_root);

	_skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal mesh"));
	_skeletalMesh->SetupAttachment(_root);
}

void AGun::SpawnShootEffect()
{
	if (_muzzleFlash == nullptr || _skeletalMesh == nullptr) return;

	UGameplayStatics::SpawnEmitterAttached(_muzzleFlash, _skeletalMesh, TEXT("MuzzleFlashSocket"));
}

void AGun::SpawnBulletImpactEffect()
{
	if (_impactEffect == nullptr) return;

	APawn* ownerPawn = Cast<APawn>(GetOwner());
	if (ownerPawn == nullptr) return;

	AController* ownerController = ownerPawn->GetController();
	if (ownerController == nullptr) return;

	FVector location;
	FRotator rotation;
	ownerController->GetPlayerViewPoint(location, rotation);

	FVector end = location + rotation.Vector() * _maxRange;

	FHitResult hit;
	bool bSuccess = GetWorld()->LineTraceSingleByChannel(hit, location, end, ECollisionChannel::ECC_GameTraceChannel1);

	if (bSuccess)
	{
		FVector shotDirection = -rotation.Vector();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), _impactEffect, hit.Location, shotDirection.Rotation());
	}
}

