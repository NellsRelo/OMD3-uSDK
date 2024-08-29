#pragma once
#include "CoreMinimal.h"
#include "RiftLightningAttributes.generated.h"

USTRUCT(BlueprintType)
struct FRiftLightningAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    OMD_API FRiftLightningAttributes();
};

