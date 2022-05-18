#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EOMDAchievementType.h"
#include "OMDAchievementProto.generated.h"

class UOMDAchievement;

USTRUCT(BlueprintType)
struct OMD_API FOMDAchievementProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDAchievement> AchievementClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EOMDAchievementType Type;
    
public:
    FOMDAchievementProto();
};

