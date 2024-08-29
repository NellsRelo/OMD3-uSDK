#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GatherTargetsRadialActionDelegateDelegate.h"
#include "OMDAction.h"
#include "OMDAction_GatherTargetsRadial.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_GatherTargetsRadial;

UCLASS(Blueprintable)
class OMD_API UOMDAction_GatherTargetsRadial : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGatherTargetsRadialActionDelegate ActorOverlapped;
    
    UOMDAction_GatherTargetsRadial();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_GatherTargetsRadial* GatherTargetsRadial(UOMDAbility* ability, const FVector& Origin, float Radius, AActor* querySource, TEnumAsByte<ECollisionChannel> visibilityChannel);
    
};

