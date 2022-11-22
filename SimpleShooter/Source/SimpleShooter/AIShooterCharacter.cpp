// Created by Eric G. Navarro

#include "AIShooterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ShooterCharacter.h"

void AAIShooterCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
}

bool AAIShooterCharacter::IsDead() const
{
	AShooterCharacter* controlledCharacter = Cast<AShooterCharacter>(GetPawn());
	if (controlledCharacter != nullptr) return controlledCharacter->IsDead();

	return true;
}

void AAIShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	FindPlayer();

	if (_behaviorTree != nullptr)
	{
		RunBehaviorTree(_behaviorTree);

		_startLocation = GetPawn()->GetActorLocation();
		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), _startLocation);
	}
}

void AAIShooterCharacter::FindPlayer()
{
	_player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	SetFocus(_player);
}
