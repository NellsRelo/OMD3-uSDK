#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "OMDTrapProto.h"
#include "PlaceTrapActionDelegateDelegate.h"
#include "OMDAction_PlaceTrap.generated.h"

class AOMDTrap;
class UOMDAbility;
class UOMDAction_PlaceTrap;

UCLASS(Blueprintable)
class OMD_API UOMDAction_PlaceTrap : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaceTrapActionDelegate OnTrapPlaced;
    
    UOMDAction_PlaceTrap();

protected:
    UFUNCTION(BlueprintCallable)
    void TrapPlaced(AOMDTrap* Trap);
    
public:
    UFUNCTION(BlueprintCallable)
    static UOMDAction_PlaceTrap* PlaceTrap(UOMDAbility* ability, const FOMDTrapProto& Trap);
    
};

