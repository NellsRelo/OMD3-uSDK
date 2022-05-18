#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "ESide.h"
#include "OMDPlayerAnimationSet.generated.h"

class UAnimMontage;
class UBlendSpace;
class UAnimSequence;
class UAimOffsetBlendSpace;

USTRUCT(BlueprintType)
struct OMD_API FOMDPlayerAnimationSet : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESide HandToIK;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> IdleUpperBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> LocomotionUpperBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAimOffsetBlendSpace> AimOffsetUpperBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> IdleUpperBodyCombatReady;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> LocomotionUpperBodyCombatReady;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAimOffsetBlendSpace> AimOffsetUpperBodyCombatReady;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CombatReadyTimerLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> StopUpperBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> JumpEnterUpperBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> JumpLoopUpperBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> JumpLandUpperBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> Stunned;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> Equip;
    
public:
    FOMDPlayerAnimationSet();
};

