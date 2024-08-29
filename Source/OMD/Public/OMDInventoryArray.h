#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OMDInventoryArrayItem.h"
#include "OMDInventoryArray.generated.h"

USTRUCT(BlueprintType)
struct FOMDInventoryArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDInventoryArrayItem> Items;
    
public:
    OMD_API FOMDInventoryArray();
};

