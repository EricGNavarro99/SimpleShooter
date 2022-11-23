// Created by Eric G. Navarro

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

UCLASS()
class SIMPLESHOOTER_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY() UUserWidget* _HUDScreen = nullptr;
	UPROPERTY(EditAnywhere, Category = "User widget") TSubclassOf<class UUserWidget> _HUDScreenClass = nullptr;

	UPROPERTY(EditAnywhere, Category = "User widget") TSubclassOf<class UUserWidget> _winScreenClass = nullptr;
	UPROPERTY(EditAnywhere, Category = "User widget") TSubclassOf<class UUserWidget> _loseScreenClass = nullptr;

	UPROPERTY(EditAnywhere) float _restartDelay = 5.f;
	FTimerHandle _restartTimer;
};
