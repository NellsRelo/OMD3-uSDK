#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "OMDLevelScriptActor.generated.h"

class AController;
class AActor;

UCLASS()
class OMD_API AOMDLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    AOMDLevelScriptActor();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayIntro();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayerTargetChanged(AController* Player, AActor* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EndGame(int32 skulls);
    
};

