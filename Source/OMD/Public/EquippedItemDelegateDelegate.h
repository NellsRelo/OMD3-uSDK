#pragma once
#include "CoreMinimal.h"
#include "EquippedItemDelegateDelegate.generated.h"

class UOMDInventoryItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquippedItemDelegate, UOMDInventoryItem*, Item);

