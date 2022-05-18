#pragma once
#include "CoreMinimal.h"
#include "OMDEventDelegateParams.h"
#include "OMDAICharacterDamageEventParams.generated.h"

UCLASS(BlueprintType)
class OMD_API UOMDAICharacterDamageEventParams : public UOMDEventDelegateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Damage;
    
    UOMDAICharacterDamageEventParams();
};

