#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "OMDSoftProtoPtr.h"
#include "OMDSpellbookWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDSpellbookWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDSpellbookWidget();
protected:
    UFUNCTION(BlueprintPure)
    void GetSortedItemsList(TArray<FOMDSoftProtoPtr>& Items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ItemPurchased(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EntitlementsChanged();
    
};

