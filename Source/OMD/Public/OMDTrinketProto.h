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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr ActiveAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveAbilityCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOMDTrinketPassive> PassiveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeToFirstWeaponOnUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManuallySetCooldownActivation;
    
public:
    FOMDTrinketProto();
};

