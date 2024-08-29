#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDTrinketPassive.generated.h"

class AOMDPlayerController;
class UOMDInventoryItem;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDTrinketPassive : public UObject {
    GENERATED_BODY()
public:
    UOMDTrinketPassive();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UnEquip(AOMDPlayerController* Player, UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Equip(AOMDPlayerController* Player, UOMDInventoryItem* Item);
    
};

