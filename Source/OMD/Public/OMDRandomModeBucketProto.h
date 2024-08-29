#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDRandomModeLevelEntry.h"
#include "OMDRandomModeModifierEntry.h"
#include "OMDRandomModeBucketProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeBucketProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeModifierEntry> BuffCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeModifierEntry> DebuffCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeLevelEntry> MissionCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeModifierEntry> HiddenModifierCollection;
    
public:
    FOMDRandomModeBucketProto();
};

