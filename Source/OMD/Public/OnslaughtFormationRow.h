#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OnslaughtFormationRow.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOnslaughtFormationRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr OMDAICharacterProto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnWithShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndlessAddCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndlessPromotePercent;
    
    FOnslaughtFormationRow();
};

