#pragma once
#include "CoreMinimal.h"
#include "EOMDStreamConversionStatus.h"
#include "OMDUserWidget.h"
#include "OMDStreamConnectStateNotifierWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDStreamConnectStateNotifierWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDStreamConnectStateNotifierWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateStreamState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SubscribedStreamStateChanged(bool bShouldBeVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StreamConnectCustomFloat(float StreamConnectCustomFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ConversionStateChanged(EOMDStreamConversionStatus StreamConversionState);
    
    UFUNCTION(BlueprintCallable)
    void AssignSubscribedStreamToNotifier();
    
};

