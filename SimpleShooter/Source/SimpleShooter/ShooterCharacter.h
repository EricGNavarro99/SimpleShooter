// Created by Eric G. Navarro

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

UCLASS()
class SIMPLESHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AShooterCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float damageAmount, struct FDamageEvent const& damageEvent, class AController* eventInstigator, AActor* damageCauser) override;

	void ShotGun();

	UFUNCTION(BlueprintPure, Category = "Health") bool IsDead() const;
	UFUNCTION(BlueprintPure, Category = "Health") float GetHealthPercent() const;

private:
	void CreateComponents();
	UPROPERTY(VisibleAnywhere) class USpringArmComponent* _springArm;
	UPROPERTY(VisibleAnywhere) class UCameraComponent* _camera;

	void BlockCamera();

	void MoveForward(float axisValue);
	void MoveRight(float axisValue);
	void LookUpRate(float axisValue);
	void LookRightRate(float axisValue);

	UPROPERTY(EditAnywhere, Category = "Gamepad") float _gamepadSensivity = 70.f;

	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ClampMin = "-100", ClampMax = "0")) float _cameraMinPitchRotation = -24.f;
	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ClampMin = "0", ClampMax = "100")) float _cameraMaxPitchRotation = 50.f;

	void CreateGun();

	UPROPERTY(EditDefaultsOnly, Category = "Gun") TSubclassOf<class AGun> _gunClass = nullptr;
	AGun* _gun = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Health", meta = (ClampMin = "0")) float _maxHealth = 100.f;
	UPROPERTY(VisibleAnywhere, Category = "Health", meta = (ClampMin = "0")) float _currentHealth;

};
