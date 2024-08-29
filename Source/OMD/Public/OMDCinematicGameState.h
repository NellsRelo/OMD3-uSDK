#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "OMDCinematicGameState.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDCinematicGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    AOMDCinematicGameState(const FObjectInitializer& ObjectInitializer);

};

