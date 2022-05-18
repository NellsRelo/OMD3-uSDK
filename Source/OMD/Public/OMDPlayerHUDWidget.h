#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDCommRoseClosedCallbackDelegate.h"
#include "OMDPlayerHUDWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDPlayerHUDWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDPlayerHUDWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleStreamConnect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleLargeMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowStreamConnectBroadcastMessage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowInventory();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsInventoryVisible() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void FadeOut(float Time);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FadeIn(float Time);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeactivateCommRose();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CommRoseY(float Val);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CommRoseX(float Val);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnShownToHUD();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnHiddenFromHUD();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActivateCommRose(const FOMDCommRoseClosedCallback& Callback);
    
};

