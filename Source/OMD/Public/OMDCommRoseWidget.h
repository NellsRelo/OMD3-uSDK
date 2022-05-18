#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDCommRoseClosedCallbackDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OMDCommRoseWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDCommRoseWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDCommRoseWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerClosedCallback(bool shouldPing, FGuid Guid);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_RemovedFromParent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_MotionY(float Val);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_MotionX(float Val);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_DismissCommRose();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_ConfirmCommRose();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitCallback(const FOMDCommRoseClosedCallback& Callback);
    
protected:
    UFUNCTION()
    bool DismissCommRose();
    
    UFUNCTION()
    bool ConfirmCommRose();
    
};

