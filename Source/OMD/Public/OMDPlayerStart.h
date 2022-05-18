#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "OMDPlayerStart.generated.h"

UCLASS()
class OMD_API AOMDPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bAllowDuringBreaks: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowDuringWaves: 1;
    
public:
    AOMDPlayerStart();
};

