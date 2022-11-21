// Created by Eric G. Navarro

#include "BTService_PlayerLocationIfSeen.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "AIShooterCharacter.h"

UBTService_PlayerLocationIfSeen::UBTService_PlayerLocationIfSeen()
{
	NodeName = "Update Player Location If Seen";
}

void UBTService_PlayerLocationIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (playerPawn == nullptr && OwnerComp.GetAIOwner() == nullptr) return;
	
	if (OwnerComp.GetAIOwner()->LineOfSightTo(playerPawn))
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), playerPawn->GetActorLocation());
	else
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
}
