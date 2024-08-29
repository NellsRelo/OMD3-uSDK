#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/MovementComponent.h"
#include "OMDPlanarContraintParams.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDPlanarContraintParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool constrainToPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlaneConstraintOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlaneConstraintNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaneConstraintAxisSetting PlaneConstraintAxisSetting;
    
    FOMDPlanarContraintParams();
};

