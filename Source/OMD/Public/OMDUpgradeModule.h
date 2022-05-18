#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDUpgradeModule.generated.h"

class UOMDInventoryItem;

UCLASS(Blueprintable)
class OMD_API UOMDUpgradeModule : public UObject {
    GENERATED_BODY()
public:
    UOMDUpgradeModule();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Apply(UOMDInventoryItem* Item, const FString& Name, const FString& Value);
    
};

