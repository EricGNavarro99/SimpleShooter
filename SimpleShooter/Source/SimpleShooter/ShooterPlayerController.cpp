// Created by Eric G. Navarro

#include "ShooterPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"

void AShooterPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	UUserWidget* finalScreenClass = CreateWidget(this, bIsWinner ? _winScreenClass : _loseScreenClass);
	if (finalScreenClass != nullptr) finalScreenClass->AddToViewport();

	if (_HUDScreen != nullptr) _HUDScreen->RemoveFromViewport();

	GetWorldTimerManager().SetTimer(_restartTimer, this, &APlayerController::RestartLevel, _restartDelay);
}

void AShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	_HUDScreen = CreateWidget(this, _HUDScreenClass);
	if (_HUDScreen != nullptr) _HUDScreen->AddToViewport();
}
