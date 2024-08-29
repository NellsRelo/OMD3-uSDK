#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OMDTrapGrid.generated.h"

class UWorld;

UCLASS(Blueprintable)
class OMD_API AOMDTrapGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridScale;
    
    AOMDTrapGrid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void ToggleDrawTrapGrid(UWorld* World);
    
};

