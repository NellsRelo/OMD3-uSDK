#pragma once
#include "CoreMinimal.h"
#include "OMDItemProto.h"
#include "OMDUserWidget.h"
#include "OMDSoftProtoPtr.h"
#include "OMDSpellbookItemDetails.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDSpellbookItemDetails : public UOMDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FOMDSoftProtoPtr> UniqueUpgrades;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr SpecialUpgrade;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr CurrentItem;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentLevel;
    
public:
    UOMDSpellbookItemDetails();
    UFUNCTION(BlueprintCallable)
    void SetItem(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetLevelUpgrade(int32 Level) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ItemUpgradeUnequipped(FOMDSoftProtoPtr upgrade);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ItemUpgradesSold();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ItemUpgradePurchased(FOMDSoftProtoPtr upgrade);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ItemUpgradeEquipped(FOMDSoftProtoPtr upgrade);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CurrentItemChanged(const FOMDItemProto& Item);
    
};

