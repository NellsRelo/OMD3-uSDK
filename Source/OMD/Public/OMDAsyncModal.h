#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "EAsyncDialogueReason.h"
#include "OMDAsyncModal.generated.h"

UCLASS(Abstract, EditInlineNew)
class OMD_API UOMDAsyncModal : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDAsyncModal();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Init(EAsyncDialogueReason reason);
    
};

