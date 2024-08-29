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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeModuleEntry> ModuleCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ModifierImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModifierTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModifierDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresEntitlement: 1;
    
public:
    FOMDRandomModeModifierProto();
};

