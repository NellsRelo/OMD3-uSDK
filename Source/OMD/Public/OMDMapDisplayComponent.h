#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OMDMapDisplayComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDMapDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bShowMarker: 1;
    
public:
    UOMDMapDisplayComponent();
    UFUNCTION(BlueprintCallable)
    void ShowMarker();
    
    UFUNCTION(BlueprintCallable)
    void HideMarker();
    
};

