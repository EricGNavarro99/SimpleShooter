// Created by Eric G. Navarro

#pragma once

#include "CoreMinimal.h"
#include "SimpleShooterGameModeBase.h"
#include "KillThemAllGameMode.generated.h"

UCLASS()
class SIMPLESHOOTER_API AKillThemAllGameMode : public ASimpleShooterGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* pawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
	
};
