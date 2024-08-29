#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskShowModalWidgetDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "OMDAsyncTaskShowModalWidget.generated.h"

class APlayerController;
class UOMDAsyncTaskShowModalWidget;
class UOMDModalWidget;

UCLASS(Blueprintable)
class OMD_API UOMDAsyncTaskShowModalWidget : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskShowModalWidgetDelegate OnClosed;
    
    UOMDAsyncTaskShowModalWidget();

    UFUNCTION(BlueprintCallable)
    static UOMDAsyncTaskShowModalWidget* ShowModalWidget(APlayerController* OwningPlayer, TSubclassOf<UOMDModalWidget> Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDModalWidget* GetModal() const;
    
};

