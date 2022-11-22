// Created by Eric G. Navarro

#include "KillThemAllGameMode.h"

void AKillThemAllGameMode::PawnKilled(APawn* pawnKilled)
{
	Super::PawnKilled(pawnKilled);

	UE_LOG(LogTemp, Warning, TEXT("A pawn was KILLED! :O"));

	APlayerController* playerController = Cast<APlayerController>(pawnKilled->GetController());

	if (playerController != nullptr) playerController->GameHasEnded(nullptr, false);
}