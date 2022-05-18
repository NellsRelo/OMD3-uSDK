#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "OMDInventoryArrayItem.generated.h"

USTRUCT(BlueprintType)
struct FOMDInventoryArrayItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    OMD_API FOMDInventoryArrayItem();
};

