#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDMapVolumeInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct OMD_API FOMDMapVolumeInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FTransform Transform;
    
    UPROPERTY(VisibleAnywhere)
    FVector Extent;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UTexture2D> MapTexture;
    
public:
    FOMDMapVolumeInfo();
};

