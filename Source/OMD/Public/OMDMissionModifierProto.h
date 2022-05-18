#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDItemMissionModifier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "OMDCharacterMissionModifier.h"
#include "OMDMissionModifierProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionModifierProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDItemMissionModifier> LoadoutItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr PlayerCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HealthRegenRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseMana;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseManaRegenRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSoftClassPath OnslaughtCoordinatorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RiftPoints;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDCharacterMissionModifier AllCharacterModifiersOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FOMDSoftProtoPtr, FOMDCharacterMissionModifier> PerCharacterModifiersOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseLoadoutOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUsePlayerCharacterOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseBaseHealthOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseHealthRegenRateOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseBaseManaOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseBaseManaRegenRateOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseAllCharacterModifiersOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUsePerCharacterModifiersOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseRiftPointOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseOnslaughtCoordinatorOverride: 1;
    
public:
    FOMDMissionModifierProto();
};

