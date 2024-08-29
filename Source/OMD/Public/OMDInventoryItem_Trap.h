#pragma once
#include "CoreMinimal.h"
#include "OMDInventoryItem.h"
#include "OMDInventoryItem_Trap.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDInventoryItem_Trap : public UOMDInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlacementFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WarMachineFlags;
    
public:
    UOMDInventoryItem_Trap();

    UFUNCTION(BlueprintCallable)
    void SetScenarioDisablesSelling(bool newValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScenarioDisablesSelling() const;
    
};

