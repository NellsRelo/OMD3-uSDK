#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDUpgradeModule.generated.h"

class UOMDInventoryItem;

UCLASS(Blueprintable)
class OMD_API UOMDUpgradeModule : public UObject {
    GENERATED_BODY()
public:
    UOMDUpgradeModule();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Apply(UOMDInventoryItem* Item, const FString& Name, const FString& Value);
    
};

