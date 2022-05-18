#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeEntryBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OMDSoftProtoPtr.h"
#include "EGameDifficulty.h"
#include "OMDRandomModeLevelEntry.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeLevelEntry : public FOMDRandomModeEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr Mission;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGameDifficulty Difficulty;
    
    FOMDRandomModeLevelEntry();
};

