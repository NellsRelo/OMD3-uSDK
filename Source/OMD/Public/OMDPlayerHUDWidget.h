#pragma once
#include "CoreMinimal.h"
#include "OMDCommRoseClosedCallbackDelegate.h"
#include "OMDUserWidget.h"
#include "OMDPlayerHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDPlayerHUDWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDPlayerHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleStreamConnect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleLargeMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowStreamConnectBroadcastMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInventoryVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeactivateCommRose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CommRoseY(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CommRoseX(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShownToHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHiddenFromHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCommRose(const FOMDCommRoseClosedCallback& Callback);
    
};

