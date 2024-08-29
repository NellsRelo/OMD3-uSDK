#pragma once
#include "CoreMinimal.h"
#include "OMDAbilityParameters.h"
#include "OMDSoftProtoPtr.h"
#include "OMDCharacterOnApplyStatusEffectParameters.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable)
class OMD_API UOMDCharacterOnApplyStatusEffectParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr protoStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* effectCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float overrideDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 statusEffectAppliedID;
    
    UOMDCharacterOnApplyStatusEffectParameters();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidApplyStatusEffect() const;
    
};

