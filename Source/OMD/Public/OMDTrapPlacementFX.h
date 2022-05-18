#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPlacementStatus.h"
#include "OMDTrapPlacementFX.generated.h"

class UStaticMeshComponent;
class USkeletalMeshComponent;

UCLASS()
class OMD_API AOMDTrapPlacementFX : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform StartFromTransform;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector GridIndicatorLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float InterpolateBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsGridVisible;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseTriggerVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TrapInterpolateSpeed;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* TriggerVolume;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EPlacementStatus CurrentStatus;
    
    AOMDTrapPlacementFX();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Placeable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Place();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_NotEnoughCoin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Equip();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ChangeStatus(EPlacementStatus newStatus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CantPlaceHere();
    
};

