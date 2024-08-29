#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "OMDPlayerStart.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowDuringBreaks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowDuringWaves: 1;
    
public:
    AOMDPlayerStart(const FObjectInitializer& ObjectInitializer);

};

