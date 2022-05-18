#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDTrapSpawnIndicator.generated.h"

UCLASS()
class OMD_API AOMDTrapSpawnIndicator : public AActor {
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
    
    AOMDTrapSpawnIndicator();
};

