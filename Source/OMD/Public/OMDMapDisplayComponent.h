#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OMDMapDisplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDMapDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowMarker: 1;
    
public:
    UOMDMapDisplayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowMarker();
    
    UFUNCTION(BlueprintCallable)
    void HideMarker();
    
};

