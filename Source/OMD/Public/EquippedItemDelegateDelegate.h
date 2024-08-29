#pragma once
#include "CoreMinimal.h"
#include "EquippedItemDelegateDelegate.generated.h"

class UOMDInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquippedItemDelegate, UOMDInventoryItem*, Item);

