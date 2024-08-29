#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDModalWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OMD_API UOMDModalWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBackgroundBlur: 1;
    
public:
    UOMDModalWidget();

    UFUNCTION(BlueprintCallable)
    void Close();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_Closed(bool bWorldIsTearingDown);
    
};

