#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDMultiplayerBucketProto.generated.h"

USTRUCT(BlueprintType)
struct FOMDMultiplayerBucketProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BucketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BucketLongName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> Campaigns;
    
public:
    OMD_API FOMDMultiplayerBucketProto();
};

