#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OMDAsyncTaskShowModalWidgetDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskShowModalWidget.generated.h"

class UOMDAsyncTaskShowModalWidget;
class APlayerController;
class UOMDModalWidget;

UCLASS()
class OMD_API UOMDAsyncTaskShowModalWidget : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskShowModalWidgetDelegate OnClosed;
    
    UOMDAsyncTaskShowModalWidget();
    UFUNCTION(BlueprintCallable)
    static UOMDAsyncTaskShowModalWidget* ShowModalWidget(APlayerController* OwningPlayer, TSubclassOf<UOMDModalWidget> Widget);
    
    UFUNCTION(BlueprintPure)
    UOMDModalWidget* GetModal() const;
    
};

