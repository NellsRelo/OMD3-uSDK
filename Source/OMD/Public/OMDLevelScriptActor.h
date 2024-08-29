#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "OMDLevelScriptActor.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable)
class OMD_API AOMDLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    AOMDLevelScriptActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerTargetChanged(AController* Player, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EndGame(int32 skulls);
    
};

