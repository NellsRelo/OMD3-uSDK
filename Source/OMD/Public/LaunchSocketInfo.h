#pragma once
#include "CoreMinimal.h"
#include "LaunchSocketInfo.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FLaunchSocketInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ComponentName;
    
    UPROPERTY(EditDefaultsOnly)
    FName SocketName;
    
    FLaunchSocketInfo();
};

