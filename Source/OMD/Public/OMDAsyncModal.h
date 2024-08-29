#pragma once
#include "CoreMinimal.h"
#include "EAsyncDialogueReason.h"
#include "OMDModalWidget.h"
#include "OMDAsyncModal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OMD_API UOMDAsyncModal : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDAsyncModal();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Init(EAsyncDialogueReason reason);
    
};

