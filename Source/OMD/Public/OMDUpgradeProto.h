#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EUpgradeType.h"
#include "OMDSoftProtoPtr.h"
#include "OMDUpgradeModuleData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "OMDUpgradeProto.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct OMD_API FOMDUpgradeProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUpgradeType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SkullCost;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Priority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr Prerequisite;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool RequiresMiniquest;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDUpgradeModuleData> Modules;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSoftClassPath> ReferencedClasses;
    
public:
    FOMDUpgradeProto();
};

