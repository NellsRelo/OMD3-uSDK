#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameFramework/MovementComponent.h"
#include "OMDPlanarContraintParams.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDPlanarContraintParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool constrainToPlane;
    
    UPROPERTY()
    FVector PlaneConstraintOrigin;
    
    UPROPERTY()
    FVector PlaneConstraintNormal;
    
    UPROPERTY()
    EPlaneConstraintAxisSetting PlaneConstraintAxisSetting;
    
    FOMDPlanarContraintParams();
};

