#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OMDPlayerHUD.generated.h"

class UOMDPlayerHUDWidget;

UCLASS(Blueprintable, NonTransient)
class OMD_API AOMDPlayerHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOMDPlayerHUDWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOMDPlayerHUDWidget* Widget;
    
public:
    AOMDPlayerHUD(const FObjectInitializer& ObjectInitializer);

};

