#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDPlayerCharacterProto.generated.h"

class UAnimMontage;
class AOMDPlayerCharacter;
class UTexture2D;

USTRUCT(BlueprintType)
struct OMD_API FOMDPlayerCharacterProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> SpellbookIconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDPlayerCharacter> BaseCharacterClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseMana;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseManaRegenRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> Skins;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr MovementAbility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> FiveSkullVictoryDance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> FourSkullVictoryDance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> ThreeSkullVictoryDance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> TwoSkullVictoryDance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> OneSkullVictoryDance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> DefeatDance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr PrimaryWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr PrimarySkin;
    
public:
    FOMDPlayerCharacterProto();
};

