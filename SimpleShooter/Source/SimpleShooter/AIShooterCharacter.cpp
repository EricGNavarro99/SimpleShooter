// Created by Eric G. Navarro

#include "AIShooterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void AAIShooterCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
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
