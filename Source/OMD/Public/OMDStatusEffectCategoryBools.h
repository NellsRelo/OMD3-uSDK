#pragma once
#include "CoreMinimal.h"
#include "OMDStatusEffectCategoryBools.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDStatusEffectCategoryBools {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 Nothing: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Burning: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Slowed: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Stoned: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Zapped: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Electrified: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Stunned: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Launched: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Frozen: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Magicked: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Melted: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Scared: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Distracted: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Healing: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Rushing: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Invincible: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Charmed: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Bleeding: 1;
    
    FOMDStatusEffectCategoryBools();
};

