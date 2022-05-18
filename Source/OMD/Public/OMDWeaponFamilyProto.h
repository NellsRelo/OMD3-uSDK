#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDWeaponFamilyProto.generated.h"

class UBlendSpace;
class UAnimSequence;

USTRUCT(BlueprintType)
struct OMD_API FOMDWeaponFamilyProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool TwoHanded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> IdleAdditiveAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> LocomotionAdditiveBlendspace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> RunAdditiveBlendspace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> SprintAdditiveBlendspace;
    
public:
    FOMDWeaponFamilyProto();
};

