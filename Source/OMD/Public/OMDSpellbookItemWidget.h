#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDSpellbookItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDSpellbookItemWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDSpellbookItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerSkullsChanged(int32 skulls);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemUpgradesChanged();
    
};

