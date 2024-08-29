#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDeathAnimationCategory.h"
#include "OMDGib.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDGib : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DetatchableBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInteractable;
    
public:
    AOMDGib(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DroppedTail(float LifeSpan);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DestroyFX(float LifeSpan, uint8 DeathType, EDeathAnimationCategory DeathAnimationCategory);
    
};

