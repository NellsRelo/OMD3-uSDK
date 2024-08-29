#pragma once
#include "CoreMinimal.h"
#include "OMDOnlinePlayer.generated.h"

USTRUCT(BlueprintType)
struct FOMDOnlinePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerNetID;
    
    OMD_API FOMDOnlinePlayer();
};

