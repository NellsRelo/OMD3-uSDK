#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDeathAnimationCategory.h"
#include "OMDGib.generated.h"

UCLASS()
class OMD_API AOMDGib : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float lifetime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> DetatchableBones;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayerInteractable;
    
public:
    AOMDGib();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DroppedTail(float LifeSpan);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DestroyFX(float LifeSpan, uint8 DeathType, EDeathAnimationCategory DeathAnimationCategory);
    
};

