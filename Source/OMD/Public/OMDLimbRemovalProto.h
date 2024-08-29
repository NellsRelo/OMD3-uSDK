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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LimbBitMaskValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LimbParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CapParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr LimbBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LimbSocket;
    
public:
    FOMDLimbRemovalProto();
};

