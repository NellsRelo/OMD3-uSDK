#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDUserWidget.h"
#include "OMDStoreOfferWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDStoreOfferWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr entitlement;
    
public:
    UOMDStoreOfferWidget();

    UFUNCTION(BlueprintCallable)
    void ShowOfferInStore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContentOwned() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EntitlementsChanged();
    
};

