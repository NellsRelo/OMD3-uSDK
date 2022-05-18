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
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText BucketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText BucketLongName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> Campaigns;
    
public:
    OMD_API FOMDMultiplayerBucketProto();
};

