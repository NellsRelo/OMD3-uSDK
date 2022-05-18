#pragma once
#include "CoreMinimal.h"
#include "OMDItemProto.h"
#include "ETrapTargetAcquisitionType.h"
#include "ETrapActivationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESensedTargetSelectionType.h"
#include "OMDTrapProto.generated.h"

class AOMDTrap;
class AOMDTrapRemovalFX;
class AOMDTrapPlacementFX;

USTRUCT(BlueprintType)
struct OMD_API FOMDTrapProto : public FOMDItemProto {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDTrap> TrapClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 PlacementFlags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 WarMachineFlags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETrapActivationType ActivationType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETrapTargetAcquisitionType TargetAcquisitionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TickInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AlwaysGenerateOverlaps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanRotate: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bFlatBounceNormal: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bPlayerCharacterCollision: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAICharacterCollision: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bResetOnGoBreaks: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHealOnStateReset: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bActivateOnCooldownComplete: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDynamicTriggerVolume: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bClampTriggerVolumeLength: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EAxis::Type> DynamicTriggerVolumeAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDTrapPlacementFX> PlacementFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDTrapRemovalFX> RemovalFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr TrapAbility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> Guardians;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector AICharacterSpawnOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText InteractText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bShootable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUsesCustomInteractionLogic: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TriggerDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TriggerDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ResetDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float cooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChargeCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxCharges;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CoinValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDisableable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDamageable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CollateralDamageValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 CausesCollateralDamage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 DestroyedOnDeath: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDamageAffectsCoinValue: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SightRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SightRadiusMinimum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESensedTargetSelectionType SensedTargetSelectionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bKeepTarget: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanBeReset: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseParentTrapsAttributes: 1;
    
public:
    FOMDTrapProto();
};

