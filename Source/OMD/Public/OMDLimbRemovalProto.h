#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDLimbRemovalProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDLimbRemovalProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LimbBitMaskValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LimbParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CapParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr LimbBelow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LimbSocket;
    
public:
    FOMDLimbRemovalProto();
};

