#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGameDifficulty.h"
#include "OMDRandomModeEntryBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeLevelEntry.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeLevelEntry : public FOMDRandomModeEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameDifficulty Difficulty;
    
    FOMDRandomModeLevelEntry();
};

