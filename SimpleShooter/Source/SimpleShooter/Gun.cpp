// Created by Eric G. Navarro
#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

AGun::AGun()
{
	PrimaryActorTick.bCanEverTick = false;

	CreateComponents();
}

void AGun::PullTrigger()
{
	SpawnShootEffect();	
	SpawnBulletImpactEffect();

	SetDamageToPlayer();

	_canDamagePlayer = false;
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
	UGameplayStatics::SpawnSoundAttached(_muzzleSound, _skeletalMesh, TEXT("MuzzleFlashSocket"));
}

void AGun::SpawnBulletImpactEffect()
{
	if (_impactEffect == nullptr) return;

	FHitResult hit;
	FVector shotDirection;
	bool bSuccess = GunTrace(hit, shotDirection);

	if (bSuccess)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), _impactEffect, hit.Location, shotDirection.Rotation());
		UGameplayStatics::SpawnSoundAtLocation(GetWorld(), _impactSound, hit.Location);
		
		_canDamagePlayer = true;
	}
}

void AGun::SetDamageToPlayer()
{
	AController* ownerController = GetOwnerController();

	FVector location;
	FRotator rotation;
	ownerController->GetPlayerViewPoint(location, rotation);

	FVector end = location + rotation.Vector() * _maxRange;

	FHitResult hit;
	FCollisionQueryParams params;
	params.AddIgnoredActor(this);
	params.AddIgnoredActor(GetOwner());

	GetWorld()->LineTraceSingleByChannel(hit, location, end, ECollisionChannel::ECC_GameTraceChannel1, params);

	if (_canDamagePlayer)
	{
		FVector shotDirection = -rotation.Vector();
		FPointDamageEvent damageEvent(_damage, hit, shotDirection, nullptr);

		AActor* hitActor = hit.GetActor();
		if (hitActor != nullptr) hitActor->TakeDamage(_damage, damageEvent, ownerController, this);
	}
}

bool AGun::GunTrace(FHitResult& hit, FVector& shotDirection)
{
	AController* ownerController = GetOwnerController();
	if (ownerController == nullptr) return false;

	FVector location;
	FRotator rotation;
	ownerController->GetPlayerViewPoint(location, rotation);
	shotDirection = -rotation.Vector();

	FVector end = location + rotation.Vector() * _maxRange;

	return GetWorld()->LineTraceSingleByChannel(hit, location, end, ECollisionChannel::ECC_GameTraceChannel1);
}

AController* AGun::GetOwnerController() const
{
	APawn* ownerPawn = Cast<APawn>(GetOwner());

	if (ownerPawn == nullptr) return nullptr;
	
	return ownerPawn->GetController();
}

