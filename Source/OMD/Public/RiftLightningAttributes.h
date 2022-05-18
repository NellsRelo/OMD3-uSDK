#pragma once
#include "CoreMinimal.h"
#include "RiftLightningAttributes.generated.h"

USTRUCT(BlueprintType)
struct FRiftLightningAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly)
    float cooldown;
    
    UPROPERTY(BlueprintReadOnly)
    float Radius;
    
    OMD_API FRiftLightningAttributes();
};

