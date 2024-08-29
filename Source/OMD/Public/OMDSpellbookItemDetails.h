#pragma once
#include "CoreMinimal.h"
#include "OMDItemProto.h"
#include "OMDSoftProtoPtr.h"
#include "OMDUserWidget.h"
#include "OMDSpellbookItemDetails.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDSpellbookItemDetails : public UOMDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> UniqueUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr SpecialUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
public:
    UOMDSpellbookItemDetails();

    UFUNCTION(BlueprintCallable)
    void SetItem(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetLevelUpgrade(int32 Level) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemUpgradeUnequipped(FOMDSoftProtoPtr upgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemUpgradesSold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemUpgradePurchased(FOMDSoftProtoPtr upgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemUpgradeEquipped(FOMDSoftProtoPtr upgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CurrentItemChanged(const FOMDItemProto& Item);
    
};

