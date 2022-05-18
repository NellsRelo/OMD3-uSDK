#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EOMDPlayerMaterialModifiers.h"
#include "EItemAquiredBy.h"
#include "OMDItemAttachment.h"
#include "OMDSoftProtoPtr.h"
#include "OMDBloomSettings.h"
#include "OMDItemProto.generated.h"

class UTexture2D;
class UOMDAbilityAttributes;
class UOMDReticleWidget;

USTRUCT(BlueprintType)
struct OMD_API FOMDItemProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDAbilityAttributes> DefaultAttributes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EItemAquiredBy AquiredBy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SkullCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDItemAttachment> Attachments;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDReticleWidget> ReticleWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> Upgrades;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EOMDPlayerMaterialModifiers PlayerMaterialModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr PlayerAnimationSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr Miniquest;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDBloomSettings BloomInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bRequiresEntitlement: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDevelopmentOnly: 1;
    
public:
    FOMDItemProto();
};

