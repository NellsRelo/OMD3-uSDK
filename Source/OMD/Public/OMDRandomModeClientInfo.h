#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeClientTierInfo.h"
#include "OMDRandomModeClientInfo.generated.h"

USTRUCT(BlueprintType)
struct FOMDRandomModeClientInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FOMDRandomModeClientTierInfo> AllTierInfo;
    
    UPROPERTY()
    int32 RemainingRiftPoints;
    
    UPROPERTY()
    int32 CurrentTier;
    
    UPROPERTY()
    int32 RemainingRerolls;
    
    UPROPERTY()
    int32 Seed;
    
    UPROPERTY()
    bool bIsInRandomMode;
    
    OMD_API FOMDRandomModeClientInfo();
};

