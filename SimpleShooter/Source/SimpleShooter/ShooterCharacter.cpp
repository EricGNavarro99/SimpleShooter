// Created by Eric G. Navarro
#include "ShooterCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Gun.h"
#include "SimpleShooterGameModeBase.h"

AShooterCharacter::AShooterCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CreateComponents();
}

void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	CreateGun();

	_currentHealth = _maxHealth;
}

void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AShooterCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);

	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &AShooterCharacter::LookUpRate);
	PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &AShooterCharacter::LookRightRate);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AShooterCharacter::ShotGun);
}

float AShooterCharacter::TakeDamage(float damageAmount, FDamageEvent const& damageEvent, AController* eventInstigator, AActor* damageCauser) 
{
	float damageToApplied = Super::TakeDamage(damageAmount, damageEvent, eventInstigator, damageCauser);	
	damageToApplied = FMath::Min(_currentHealth, damageToApplied);

	_currentHealth -= damageToApplied;

	if (isDead())
	{
		ASimpleShooterGameModeBase* gameMode = GetWorld()->GetAuthGameMode<ASimpleShooterGameModeBase>();
		if (gameMode != nullptr) gameMode->PawnKilled(this);

		DetachFromControllerPendingDestroy();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	return damageToApplied;
}

bool AShooterCharacter::isDead() const
{
	return _currentHealth <= 0.f ? true : false;
}

void AShooterCharacter::CreateComponents()
{
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	_springArm->SetupAttachment(RootComponent);
	_camera->SetupAttachment(_springArm, USpringArmComponent::SocketName);

	_springArm->bUsePawnControlRotation = 1;
}

void AShooterCharacter::MoveForward(float axisValue)
{
	AddMovementInput(GetActorForwardVector() * axisValue);
}

void AShooterCharacter::MoveRight(float axisValue)
{
	AddMovementInput(GetActorRightVector() * axisValue);
}

void AShooterCharacter::LookUpRate(float axisValue)
{	
	AddControllerPitchInput(axisValue * _gamepadSensivity * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::LookRightRate(float axisValue)
{
	AddControllerYawInput(axisValue * _gamepadSensivity * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::CreateGun()
{
	if (_gun == nullptr && _gunClass != nullptr)
	{
		_gun = GetWorld()->SpawnActor<AGun>(_gunClass);

		GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);

		_gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));

		_gun->SetOwner(this);
	}
}

void AShooterCharacter::ShotGun()
{
	_gun->PullTrigger();
}