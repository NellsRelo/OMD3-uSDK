#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "OMDCinematicGameMode.generated.h"

class AController;

UCLASS(NonTransient)
class OMD_API AOMDCinematicGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AOMDCinematicGameMode();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ClientLeftGame(AController* Controller);
    
};

