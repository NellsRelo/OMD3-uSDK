#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPlacementStatus.h"
#include "OMDTrapPlacementFX.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTrapPlacementFX : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartFromTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GridIndicatorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolateBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGridVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapInterpolateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlacementStatus CurrentStatus;
    
    AOMDTrapPlacementFX(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Placeable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Place();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NotEnoughCoin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Equip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChangeStatus(EPlacementStatus newStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CantPlaceHere();
    
};

