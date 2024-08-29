#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GatherTargetsForwardArcActionDelegateDelegate.h"
#include "OMDAction.h"
#include "OMDAction_GatherTargetsForwardArc.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_GatherTargetsForwardArc;

UCLASS(Blueprintable)
class OMD_API UOMDAction_GatherTargetsForwardArc : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGatherTargetsForwardArcActionDelegate ActorOverlapped;
    
    UOMDAction_GatherTargetsForwardArc();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_GatherTargetsForwardArc* GatherTargetsForwardArc(UOMDAbility* ability, const FVector& Origin, const FVector& forwardVector, float Radius, float angleArc, AActor* querySource, TEnumAsByte<ECollisionChannel> visibilityChannel);
    
};

