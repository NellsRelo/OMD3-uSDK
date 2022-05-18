#pragma once
#include "CoreMinimal.h"
#include "OMDInventoryItem.h"
#include "OMDInventoryItem_Trap.generated.h"

UCLASS()
class OMD_API UOMDInventoryItem_Trap : public UOMDInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 PlacementFlags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 WarMachineFlags;
    
public:
    UOMDInventoryItem_Trap();
    UFUNCTION(BlueprintCallable)
    void SetScenarioDisablesSelling(bool newValue);
    
    UFUNCTION(BlueprintPure)
    bool GetScenarioDisablesSelling() const;
    
};

