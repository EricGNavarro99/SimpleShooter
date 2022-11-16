// Created by Eric G. Navarro

#include "AIShooterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void AAIShooterCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
	
	//MoveToActor(_player, 200);

	//DetectObstacles();
}

void AAIShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	FindPlayer();

	if (_behaviorTree != nullptr)
	{
		RunBehaviorTree(_behaviorTree);
		if (_player != nullptr) GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), _player->GetActorLocation());
	}
}

void AAIShooterCharacter::FindPlayer()
{
	_player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	SetFocus(_player);
}

void AAIShooterCharacter::DetectObstacles()
{
	if (LineOfSightTo(_player))
	{
		SetFocus(_player);
		MoveToActor(_player, _acceptanceRadius);
	}
	else
	{
		ClearFocus(EAIFocusPriority::Gameplay);
		StopMovement();
	}
}
