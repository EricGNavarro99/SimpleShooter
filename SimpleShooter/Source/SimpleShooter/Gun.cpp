// Created by Eric G. Navarro
#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"

AGun::AGun()
{
	PrimaryActorTick.bCanEverTick = true;

	CreateComponents();
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

