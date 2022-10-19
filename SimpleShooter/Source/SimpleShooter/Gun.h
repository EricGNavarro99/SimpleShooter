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

	void PullTrigger();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	void CreateComponents();

	UPROPERTY(VisibleAnywhere) USceneComponent* _root;
	UPROPERTY(VisibleAnywhere) USkeletalMeshComponent* _skeletalMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Particles", meta = (Tooltip = "Particles of muzzle when the gun shoot.")) UParticleSystem* _muzzleFlash;
	UPROPERTY(EditDefaultsOnly, Category = "Particles", meta = (Tooltip = "Particles when the bullet impacts.")) UParticleSystem* _impactEffect;

	void SpawnShootEffect();
	void SpawnBulletImpactEffect();

	UPROPERTY(EditDefaultsOnly, Category = "Bullet range", meta = (Tooltip = "Max distance that bullet can do.", ClampMin = "1000")) float _maxRange = 10000.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage") float _damage = 10.f;
	void SetDamageToPlayer();
	bool _canDamagePlayer = false;

};
