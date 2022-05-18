#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeLevelEntry.h"
#include "OMDProtoBase.h"
#include "OMDRandomModeModifierEntry.h"
#include "OMDRandomModeBucketProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeBucketProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDRandomModeModifierEntry> BuffCollection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDRandomModeModifierEntry> DebuffCollection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDRandomModeLevelEntry> MissionCollection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDRandomModeModifierEntry> HiddenModifierCollection;
    
public:
    FOMDRandomModeBucketProto();
};

