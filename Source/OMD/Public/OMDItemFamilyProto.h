#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDItemFamilyProto.generated.h"

class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct OMD_API FOMDItemFamilyProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> IdleAdditiveAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlendSpace> LocomotionAdditiveBlendspace;
    
public:
    FOMDItemFamilyProto();
};

