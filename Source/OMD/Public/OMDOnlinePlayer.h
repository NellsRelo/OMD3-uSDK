#pragma once
#include "CoreMinimal.h"
#include "OMDOnlinePlayer.generated.h"

USTRUCT(BlueprintType)
struct FOMDOnlinePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly)
    FString playerNetID;
    
    OMD_API FOMDOnlinePlayer();
};

