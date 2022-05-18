#pragma once
#include "CoreMinimal.h"
#include "GatherTargetsRadialActionDelegateDelegate.h"
#include "OMDAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "OMDAction_GatherTargetsRadial.generated.h"

class UOMDAction_GatherTargetsRadial;
class UOMDAbility;
class AActor;

UCLASS()
class OMD_API UOMDAction_GatherTargetsRadial : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGatherTargetsRadialActionDelegate ActorOverlapped;
    
    UOMDAction_GatherTargetsRadial();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_GatherTargetsRadial* GatherTargetsRadial(UOMDAbility* ability, const FVector& Origin, float Radius, AActor* querySource, TEnumAsByte<ECollisionChannel> visibilityChannel);
    
};

