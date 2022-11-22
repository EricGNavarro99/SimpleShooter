// Created by Eric G. Navarro

#include "ShooterPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"

void AShooterPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	/*
	if (bIsWinner)
	{
		UUserWidget* winScreenClass = CreateWidget(this, _winScreenClass);
		if (winScreenClass != nullptr) winScreenClass->AddToViewport();
	}
	else
	{
		UUserWidget* loseScreenClass = CreateWidget(this, _loseScreenClass);
		if (loseScreenClass != nullptr) loseScreenClass->AddToViewport();
	}
	*/

	UUserWidget* finalScreenClass = CreateWidget(this, bIsWinner ? _winScreenClass : _loseScreenClass);
	if (finalScreenClass != nullptr) finalScreenClass->AddToViewport();

	GetWorldTimerManager().SetTimer(_restartTimer, this, &APlayerController::RestartLevel, _restartDelay);
}