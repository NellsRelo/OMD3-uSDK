#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OMDProtoBase.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDProtoBase : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName Name;
    
public:
    FOMDProtoBase();
};

