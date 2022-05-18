#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDAchievement.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDAchievement : public UObject {
    GENERATED_BODY()
public:
    UOMDAchievement();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EvaluateCompletion(APlayerController* Player, int64& Progress, int64& required) const;
    
};

