#pragma once
#include "CoreMinimal.h"
#include "OMDPickupMissionModifier.h"
#include "OMDCharacterMissionModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDCharacterMissionModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RiftPointsOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseCoinOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HealthModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MoveSpeedModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AttackDamageModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDPickupMissionModifier PickupModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseRiftPointsOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseBaseCoinOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseHealthModifier: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseMoveSpeedModifier: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseAttackDamageModifier: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUsePickupModifier: 1;
    
public:
    FOMDCharacterMissionModifier();
};

