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

private:
	void CreateComponents();
	UPROPERTY(VisibleAnywhere) class USpringArmComponent* _springArm;
	UPROPERTY(VisibleAnywhere) class UCameraComponent* _camera;

	void MoveForward(float axisValue);
	void MoveRight(float axisValue);
	void LookUpRate(float axisValue);
	void LookRightRate(float axisValue);

	UPROPERTY(EditAnywhere) float _gamepadSensivity = 70.f;

	void CreateGun();
	UPROPERTY(EditDefaultsOnly) TSubclassOf<class AGun> _gunClass = nullptr;
	AGun* _gun = nullptr;

};
