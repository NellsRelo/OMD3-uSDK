#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OMDAction.h"
#include "OMDAction_AttachToComponent.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_AttachToComponent;
class USceneComponent;

UCLASS(Blueprintable)
class OMD_API UOMDAction_AttachToComponent : public UOMDAction {
    GENERATED_BODY()
public:
    UOMDAction_AttachToComponent();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_AttachToComponent* AttachToComponent(UOMDAbility* ability, AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
};

