// Created by Eric G. Navarro

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIShooterCharacter.generated.h"

UCLASS()
class SIMPLESHOOTER_API AAIShooterCharacter : public AAIController
{
	GENERATED_BODY()
public:
	virtual void Tick(float deltaSeconds);

protected:
	virtual void BeginPlay() override;

private:
	APawn* _player = nullptr;
	UPROPERTY(EditAnywhere, Category = "Enemy AI") class UBehaviorTree* _behaviorTree = nullptr;

	UPROPERTY(EditAnywhere, Category = "Enemy AI", meta = (ClampMin = "0", ClampMax = "500")) float _acceptanceRadius = 200.f;
	
	void FindPlayer();
	void DetectObstacles();
};
