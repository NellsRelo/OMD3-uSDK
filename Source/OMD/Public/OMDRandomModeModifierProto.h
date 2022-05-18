#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDRandomModeModuleEntry.h"
#include "OMDRandomModeModifierProto.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeModifierProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDRandomModeModuleEntry> ModuleCollection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ModifierImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText ModifierTitle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText ModifierDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bRequiresEntitlement: 1;
    
public:
    FOMDRandomModeModifierProto();
};

