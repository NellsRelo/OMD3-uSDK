#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OMDCommRoseClosedCallbackDelegate.h"
#include "OMDUserWidget.h"
#include "OMDCommRoseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDCommRoseWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDCommRoseWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerClosedCallback(bool shouldPing, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_RemovedFromParent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MotionY(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MotionX(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_DismissCommRose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ConfirmCommRose();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitCallback(const FOMDCommRoseClosedCallback& Callback);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DismissCommRose();
    
    UFUNCTION(BlueprintCallable)
    bool ConfirmCommRose();
    
};

