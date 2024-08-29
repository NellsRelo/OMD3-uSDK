#pragma once
#include "CoreMinimal.h"
#include "EOMDAchievementType.h"
#include "OMDProtoBase.h"
#include "OMDAchievementProto.generated.h"

class UOMDAchievement;

USTRUCT(BlueprintType)
struct OMD_API FOMDAchievementProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOMDAchievement> AchievementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOMDAchievementType Type;
    
public:
    FOMDAchievementProto();
};

