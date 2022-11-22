// Created by Eric G. Navarro

#include "KillThemAllGameMode.h"
#include "GameFramework/Controller.h"
#include "AIShooterCharacter.h"
#include "EngineUtils.h"

void AKillThemAllGameMode::PawnKilled(APawn* pawnKilled)
{
	Super::PawnKilled(pawnKilled);

	APlayerController* playerController = Cast<APlayerController>(pawnKilled->GetController());

	if (playerController != nullptr) EndGame(false);

	for (AAIShooterCharacter* controller : TActorRange<AAIShooterCharacter>(GetWorld()))
		if (!controller->IsDead()) return;

	EndGame(true);
}

void AKillThemAllGameMode::EndGame(bool bIsPlayerWinner)
{
	for (AController* controller : TActorRange<AController>(GetWorld()))
	{
		bool bIsWinner = controller->IsPlayerController() == bIsPlayerWinner;
		controller->GameHasEnded(controller->GetPawn(), bIsWinner);
	}
}
