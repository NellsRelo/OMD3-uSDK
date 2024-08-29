#pragma once
#include "CoreMinimal.h"
#include "LaunchSocketInfo.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FLaunchSocketInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    FLaunchSocketInfo();
};

