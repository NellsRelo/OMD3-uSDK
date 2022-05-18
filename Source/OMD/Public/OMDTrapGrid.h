#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDTrapGrid.generated.h"

class UWorld;

UCLASS()
class OMD_API AOMDTrapGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GridScale;
    
    AOMDTrapGrid();
    UFUNCTION(BlueprintCallable)
    static void ToggleDrawTrapGrid(UWorld* World);
    
};

