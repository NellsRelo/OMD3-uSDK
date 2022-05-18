#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDetachmentRule -FallbackName=EDetachmentRule
#include "OMDAction.h"
#include "OMDAction_DetachFromActor.generated.h"

class UOMDAction_DetachFromActor;
class UOMDAbility;
class AActor;

UCLASS()
class OMD_API UOMDAction_DetachFromActor : public UOMDAction {
    GENERATED_BODY()
public:
    UOMDAction_DetachFromActor();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_DetachFromActor* DetachFromActor(UOMDAbility* ability, AActor* actorToDetach, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
    
};

