#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OMDCinematicGameMode.generated.h"

class AController;

UCLASS(Blueprintable, NonTransient)
class OMD_API AOMDCinematicGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AOMDCinematicGameMode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClientLeftGame(AController* Controller);
    
};

