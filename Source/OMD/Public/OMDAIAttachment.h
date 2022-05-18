#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDeathAnimationCategory.h"
#include "OMDAIAttachment.generated.h"

class UMeshComponent;

UCLASS()
class OMD_API AOMDAIAttachment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector RiftLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayerInteractable;
    
public:
    AOMDAIAttachment();
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetFXMesh() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_SpawnedFromRiftFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DestroyFX(float LifeSpan, uint8 DeathType, EDeathAnimationCategory DeathAnimationCategory);
    
};

