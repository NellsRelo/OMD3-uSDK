#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDSpellbookItemWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDSpellbookItemWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDSpellbookItemWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayerSkullsChanged(int32 skulls);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ItemUpgradesChanged();
    
};

