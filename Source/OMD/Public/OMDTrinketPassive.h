#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDTrinketPassive.generated.h"

class AOMDPlayerController;
class UOMDInventoryItem;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDTrinketPassive : public UObject {
    GENERATED_BODY()
public:
    UOMDTrinketPassive();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UnEquip(AOMDPlayerController* Player, UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Equip(AOMDPlayerController* Player, UOMDInventoryItem* Item);
    
};

