#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "OMDSoftProtoPtr.h"
#include "OMDSpellbookWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDSpellbookWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDSpellbookWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSortedItemsList(TArray<FOMDSoftProtoPtr>& Items);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemPurchased(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EntitlementsChanged();
    
};

