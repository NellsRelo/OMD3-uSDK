#pragma once
#include "CoreMinimal.h"
#include "OMDAbilityParameters.h"
#include "OMDSoftProtoPtr.h"
#include "OMDCharacterOnApplyStatusEffectParameters.generated.h"

class AActor;
class AController;

UCLASS(BlueprintType)
class OMD_API UOMDCharacterOnApplyStatusEffectParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDSoftProtoPtr protoStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* effectCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AController* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float overrideDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 statusEffectAppliedID;
    
    UOMDCharacterOnApplyStatusEffectParameters();
    UFUNCTION(BlueprintPure)
    bool DidApplyStatusEffect() const;
    
};

