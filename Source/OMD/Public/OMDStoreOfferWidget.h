#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStoreOfferWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDStoreOfferWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FOMDSoftProtoPtr entitlement;
    
public:
    UOMDStoreOfferWidget();
    UFUNCTION(BlueprintCallable)
    void ShowOfferInStore();
    
    UFUNCTION(BlueprintPure)
    bool IsContentOwned() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EntitlementsChanged();
    
};

