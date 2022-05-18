#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "EOMDStreamConversionStatus.h"
#include "OMDStreamConnectStateNotifierWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDStreamConnectStateNotifierWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDStreamConnectStateNotifierWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateStreamState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SubscribedStreamStateChanged(bool bShouldBeVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_StreamConnectCustomFloat(float StreamConnectCustomFloat);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ConversionStateChanged(EOMDStreamConversionStatus StreamConversionState);
    
    UFUNCTION(BlueprintCallable)
    void AssignSubscribedStreamToNotifier();
    
};

