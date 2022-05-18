#pragma once
#include "CoreMinimal.h"
#include "OMDProjectile.h"
#include "OMDPlayerProjectile.generated.h"

UCLASS()
class OMD_API AOMDPlayerProjectile : public AOMDProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 bCanHeadshot: 1;
    
    AOMDPlayerProjectile();
};

