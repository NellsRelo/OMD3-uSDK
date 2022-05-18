#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskShowMessageBoxDelegateDelegate.h"
#include "EOMDMessageBoxType.h"
#include "EOMDMessageBoxResult.h"
#include "OMDAsyncTaskShowMessageBox.generated.h"

class APlayerController;
class UOMDAsyncTaskShowMessageBox;

UCLASS()
class OMD_API UOMDAsyncTaskShowMessageBox : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskShowMessageBoxDelegate OnOK;
    
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskShowMessageBoxDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskShowMessageBoxDelegate OnYes;
    
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskShowMessageBoxDelegate OnNo;
    
    UOMDAsyncTaskShowMessageBox();
    UFUNCTION(BlueprintCallable)
    static UOMDAsyncTaskShowMessageBox* ShowMessageBox(APlayerController* OwningPlayer, FText Text, FText Caption, EOMDMessageBoxType Type);
    
protected:
    UFUNCTION()
    void HandleResult(EOMDMessageBoxResult Result);
    
};

