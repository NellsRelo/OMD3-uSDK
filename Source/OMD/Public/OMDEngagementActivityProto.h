#pragma once
#include "CoreMinimal.h"
#include "EEngagementActivityType.h"
#include "OMDProtoBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDEngagementActivityProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDEngagementActivityProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEngagementActivityType ActivityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountRequiredForCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr AssociatedCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr AssociatedMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr AssociatedAchievement;
    
public:
    FOMDEngagementActivityProto();
};

