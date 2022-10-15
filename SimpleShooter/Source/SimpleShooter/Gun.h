// Created by Eric G. Navarro

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class SIMPLESHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:
	AGun();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	void CreateComponents();

	UPROPERTY(VisibleAnywhere) USceneComponent* _root;
	UPROPERTY(VisibleAnywhere) USkeletalMeshComponent* _skeletalMesh;

};
