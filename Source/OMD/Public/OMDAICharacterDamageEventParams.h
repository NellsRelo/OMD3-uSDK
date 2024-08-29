#pragma once
#include "CoreMinimal.h"
#include "OMDEventDelegateParams.h"
#include "OMDAICharacterDamageEventParams.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDAICharacterDamageEventParams : public UOMDEventDelegateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UOMDAICharacterDamageEventParams();

};

