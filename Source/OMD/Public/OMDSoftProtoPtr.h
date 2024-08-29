#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OMDSoftProtoPtr.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDSoftProtoPtr {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    FOMDSoftProtoPtr();
};
FORCEINLINE uint32 GetTypeHash(const FOMDSoftProtoPtr) { return 0; }

