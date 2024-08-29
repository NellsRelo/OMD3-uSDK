#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OMDAction.h"
#include "OMDAction_DetachFromActor.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_DetachFromActor;

UCLASS(Blueprintable)
class OMD_API UOMDAction_DetachFromActor : public UOMDAction {
    GENERATED_BODY()
public:
    UOMDAction_DetachFromActor();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_DetachFromActor* DetachFromActor(UOMDAbility* ability, AActor* actorToDetach, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
    
};

