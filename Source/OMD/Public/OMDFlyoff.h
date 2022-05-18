#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDFlyoff.generated.h"

class USceneComponent;
class UWidgetComponent;

UCLASS()
class OMD_API AOMDFlyoff : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY()
    bool bIsAvailable;
    
    UPROPERTY(EditAnywhere)
    float flyoffLifeSpan;
    
public:
    AOMDFlyoff();
    UFUNCTION(BlueprintCallable)
    void SetIsAvailable(bool isAvailable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeFlyoff();
    
    UFUNCTION(BlueprintPure)
    bool GetIsAvailable();
    
    UFUNCTION(BlueprintCallable)
    float GetFlyoffLifeSpan();
    
};

