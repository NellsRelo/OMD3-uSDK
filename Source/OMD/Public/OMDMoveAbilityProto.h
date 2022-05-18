#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "ECharacterMovementAbilities.h"
#include "OMDSoftProtoPtr.h"
#include "OMDMoveAbilityProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMoveAbilityProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ECharacterMovementAbilities MovementAbilityType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ManaCostOnUse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ManaCostPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float cooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr MoveAbilityApplyEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPreventsInteract;
    
public:
    FOMDMoveAbilityProto();
};

