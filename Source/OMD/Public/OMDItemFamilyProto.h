#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDItemFamilyProto.generated.h"

class UBlendSpace;
class UAnimSequence;

USTRUCT(BlueprintType)
struct OMD_API FOMDItemFamilyProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> IdleAdditiveAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> LocomotionAdditiveBlendspace;
    
public:
    FOMDItemFamilyProto();
};

