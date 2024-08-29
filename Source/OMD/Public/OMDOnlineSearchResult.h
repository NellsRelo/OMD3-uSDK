#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "OMDSoftProtoPtr.h"
#include "OMDOnlineSearchResult.generated.h"

USTRUCT(BlueprintType)
struct FOMDOnlineSearchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HostName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr BucketProto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CampaignProto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr MissionProto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameDifficulty Difficulty;
    
    OMD_API FOMDOnlineSearchResult();
};

