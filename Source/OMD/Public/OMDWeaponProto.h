#pragma once
#include "CoreMinimal.h"
#include "OMDItemProto.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDSoftProtoPtr.h"
#include "OMDWeaponProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDWeaponProto : public FOMDItemProto {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FVector> HandOffsets;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr PrimaryAbility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PrimaryAbilityCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr SecondaryAbility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SecondaryAbilityCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAllowsHeadshots: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HeadshotMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAllowsTargeting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TargetingFOV;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAllowsAimAssist: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr PrimaryTriggerEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr SecondaryTriggerEffect;
    
public:
    FOMDWeaponProto();
};

