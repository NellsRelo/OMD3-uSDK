#pragma once
#include "CoreMinimal.h"
#include "EOMDMessageBoxResult.h"
#include "EOMDMessageBoxType.h"
#include "OMDModalWidget.h"
#include "OMDMessageBox.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OMD_API UOMDMessageBox : public UOMDModalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOMDMessageBoxType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCaption() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ResultHandled(EOMDMessageBoxResult Result);
    
};

