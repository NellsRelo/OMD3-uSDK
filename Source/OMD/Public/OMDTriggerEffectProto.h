#pragma once
#include "CoreMinimal.h"
#include "EOMDTriggerEffectMode.h"
#include "OMDProtoBase.h"
#include "OMDUInt8Range.h"
#include "OMDTriggerEffectProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTriggerEffectProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EOMDTriggerEffectMode Mode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 FeedbackPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 FeedbackStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDUInt8Range SlopeFeedbackPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 SlopeFeedbackStartStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 SlopeFeedbackEndStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDUInt8Range WeaponPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 WeaponStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 VibrationPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 VibrationStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 VibrationFrequency;
    
public:
    FOMDTriggerEffectProto();
};

