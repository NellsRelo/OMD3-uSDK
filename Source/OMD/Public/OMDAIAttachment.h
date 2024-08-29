#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EDeathAnimationCategory.h"
#include "OMDAIAttachment.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDAIAttachment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RiftLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInteractable;
    
public:
    AOMDAIAttachment(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetFXMesh() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_SpawnedFromRiftFX();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DestroyFX(float LifeSpan, uint8 DeathType, EDeathAnimationCategory DeathAnimationCategory);
    
};

