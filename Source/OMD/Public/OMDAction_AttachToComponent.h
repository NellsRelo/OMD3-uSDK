#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachmentRule -FallbackName=EAttachmentRule
#include "OMDAction_AttachToComponent.generated.h"

class UOMDAction_AttachToComponent;
class USceneComponent;
class UOMDAbility;
class AActor;

UCLASS()
class OMD_API UOMDAction_AttachToComponent : public UOMDAction {
    GENERATED_BODY()
public:
    UOMDAction_AttachToComponent();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_AttachToComponent* AttachToComponent(UOMDAbility* ability, AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
};

