#pragma once
#include "CoreMinimal.h"
#include "OMDLeaderboardRowInfo.h"
#include "OMDLeaderboardInfo.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDLeaderboardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDLeaderboardRowInfo> Rows;
    
    FOMDLeaderboardInfo();
};

