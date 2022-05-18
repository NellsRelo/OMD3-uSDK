#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "PlaceTrapActionDelegateDelegate.h"
#include "OMDTrapProto.h"
#include "OMDAction_PlaceTrap.generated.h"

class UOMDAction_PlaceTrap;
class AOMDTrap;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_PlaceTrap : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlaceTrapActionDelegate OnTrapPlaced;
    
    UOMDAction_PlaceTrap();
protected:
    UFUNCTION()
    void TrapPlaced(AOMDTrap* Trap);
    
public:
    UFUNCTION(BlueprintCallable)
    static UOMDAction_PlaceTrap* PlaceTrap(UOMDAbility* ability, const FOMDTrapProto& Trap);
    
};

