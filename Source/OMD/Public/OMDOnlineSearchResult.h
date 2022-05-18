#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "EGameDifficulty.h"
#include "OMDOnlineSearchResult.generated.h"

USTRUCT(BlueprintType)
struct FOMDOnlineSearchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString HostName;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr BucketProto;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr CampaignProto;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr MissionProto;
    
    UPROPERTY(BlueprintReadOnly)
    EGameDifficulty Difficulty;
    
    OMD_API FOMDOnlineSearchResult();
};

