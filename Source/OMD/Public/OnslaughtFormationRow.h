#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OnslaughtFormationRow.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOnslaughtFormationRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDSoftProtoPtr OMDAICharacterProto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SpawnWithShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EndlessAddCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessPromotePercent;
    
    FOnslaughtFormationRow();
};

