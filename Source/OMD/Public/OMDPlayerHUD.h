#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OMDPlayerHUD.generated.h"

class UOMDPlayerHUDWidget;

UCLASS(NonTransient)
class OMD_API AOMDPlayerHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UOMDPlayerHUDWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UOMDPlayerHUDWidget* Widget;
    
public:
    AOMDPlayerHUD();
};

