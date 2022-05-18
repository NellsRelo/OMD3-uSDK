#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EItemAquiredBy.h"
#include "OMDPlayerSkinProto.generated.h"

class AOMDPlayerCharacter;
class UTexture2D;

USTRUCT(BlueprintType)
struct FOMDPlayerSkinProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> SpellbookIconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDPlayerCharacter> BaseCharacterClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EItemAquiredBy AquiredBy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SkullCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bRequiresEntitlement: 1;
    
public:
    OMD_API FOMDPlayerSkinProto();
};

