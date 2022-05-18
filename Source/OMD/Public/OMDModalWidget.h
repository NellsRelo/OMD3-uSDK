#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDModalWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class OMD_API UOMDModalWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bUseBackgroundBlur: 1;
    
public:
    UOMDModalWidget();
    UFUNCTION(BlueprintCallable)
    void Close();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BP_Closed(bool bWorldIsTearingDown);
    
};

