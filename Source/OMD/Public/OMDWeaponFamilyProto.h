#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDWeaponFamilyProto.generated.h"

class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct OMD_API FOMDWeaponFamilyProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TwoHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> IdleAdditiveAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlendSpace> LocomotionAdditiveBlendspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlendSpace> RunAdditiveBlendspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlendSpace> SprintAdditiveBlendspace;
    
public:
    FOMDWeaponFamilyProto();
};

