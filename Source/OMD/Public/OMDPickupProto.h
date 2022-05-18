#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDPickupProto.generated.h"

class AOMDPickup;
class UTexture2D;

USTRUCT(BlueprintType)
struct OMD_API FOMDPickupProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDPickup> Pickup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float amount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DropWeight;
    
public:
    FOMDPickupProto();
};

