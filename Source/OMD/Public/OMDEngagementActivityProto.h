#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EEngagementActivityType.h"
#include "OMDSoftProtoPtr.h"
#include "OMDEngagementActivityProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDEngagementActivityProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EEngagementActivityType ActivityType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CountRequiredForCompletion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr AssociatedCampaign;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr AssociatedMission;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr AssociatedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText EntitlementId;
    
public:
    FOMDEngagementActivityProto();
};

