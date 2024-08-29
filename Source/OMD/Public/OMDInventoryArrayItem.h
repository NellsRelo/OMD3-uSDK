#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OMDInventoryArrayItem.generated.h"

USTRUCT(BlueprintType)
struct FOMDInventoryArrayItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    OMD_API FOMDInventoryArrayItem();
};

