#pragma once
#include "CoreMinimal.h"
#include "OMDItemProto.h"
#include "OMDSoftProtoPtr.h"
#include "OMDTrinketProto.generated.h"

class UOMDTrinketPassive;

USTRUCT(BlueprintType)
struct OMD_API FOMDTrinketProto : public FOMDItemProto {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr ActiveAbility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ActiveAbilityCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDTrinketPassive> PassiveClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CoinValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ChangeToFirstWeaponOnUse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bManuallySetCooldownActivation;
    
public:
    FOMDTrinketProto();
};

