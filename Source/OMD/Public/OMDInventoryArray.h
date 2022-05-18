#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "OMDInventoryArrayItem.h"
#include "OMDInventoryArray.generated.h"

USTRUCT(BlueprintType)
struct FOMDInventoryArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FOMDInventoryArrayItem> Items;
    
public:
    OMD_API FOMDInventoryArray();
};

