#pragma once
#include "CoreMinimal.h"
#include "OMDProjectile.h"
#include "OMDPlayerProjectile.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDPlayerProjectile : public AOMDProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanHeadshot: 1;
    
    AOMDPlayerProjectile(const FObjectInitializer& ObjectInitializer);

};

