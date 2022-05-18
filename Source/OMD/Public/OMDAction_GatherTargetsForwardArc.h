#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "GatherTargetsForwardArcActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDAction_GatherTargetsForwardArc.generated.h"

class UOMDAction_GatherTargetsForwardArc;
class UOMDAbility;
class AActor;

UCLASS()
class OMD_API UOMDAction_GatherTargetsForwardArc : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGatherTargetsForwardArcActionDelegate ActorOverlapped;
    
    UOMDAction_GatherTargetsForwardArc();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_GatherTargetsForwardArc* GatherTargetsForwardArc(UOMDAbility* ability, const FVector& Origin, const FVector& forwardVector, float Radius, float angleArc, AActor* querySource, TEnumAsByte<ECollisionChannel> visibilityChannel);
    
};

