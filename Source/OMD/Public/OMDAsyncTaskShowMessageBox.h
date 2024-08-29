#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EOMDMessageBoxResult.h"
#include "EOMDMessageBoxType.h"
#include "OMDAsyncTaskShowMessageBoxDelegateDelegate.h"
#include "OMDAsyncTaskShowMessageBox.generated.h"

class APlayerController;
class UOMDAsyncTaskShowMessageBox;

UCLASS(Blueprintable)
class OMD_API UOMDAsyncTaskShowMessageBox : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskShowMessageBoxDelegate OnOK;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskShowMessageBoxDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskShowMessageBoxDelegate OnYes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskShowMessageBoxDelegate OnNo;
    
    UOMDAsyncTaskShowMessageBox();

    UFUNCTION(BlueprintCallable)
    static UOMDAsyncTaskShowMessageBox* ShowMessageBox(APlayerController* OwningPlayer, FText Text, FText Caption, EOMDMessageBoxType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleResult(EOMDMessageBoxResult Result);
    
};

