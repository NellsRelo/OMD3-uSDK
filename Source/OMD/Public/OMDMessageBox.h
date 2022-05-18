#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "EOMDMessageBoxType.h"
#include "EOMDMessageBoxResult.h"
#include "OMDMessageBox.generated.h"

UCLASS(Abstract, EditInlineNew)
class OMD_API UOMDMessageBox : public UOMDModalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Caption;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOMDMessageBoxType Type;
    
public:
    UOMDMessageBox();
    UFUNCTION(BlueprintCallable)
    void SetType(EOMDMessageBoxType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetCaption(FText NewCaption);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleResult(EOMDMessageBoxResult Result);
    
public:
    UFUNCTION(BlueprintPure)
    EOMDMessageBoxType GetType() const;
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCaption() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ResultHandled(EOMDMessageBoxResult Result);
    
};

