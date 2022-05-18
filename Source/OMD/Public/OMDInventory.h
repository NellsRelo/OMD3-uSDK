#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDInventoryArray.h"
#include "OMDSoftProtoPtr.h"
#include "OMDInventoryArrayItem.h"
#include "OMDInventory.generated.h"

class UOMDInventoryItem;

UCLASS(NotPlaceable)
class OMD_API AOMDInventory : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FOMDInventoryArray LoadoutItems;
    
    UPROPERTY()
    TMap<FOMDSoftProtoPtr, UOMDInventoryItem*> ItemInstances;
    
public:
    AOMDInventory();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RemoveLoadoutItem(const FOMDSoftProtoPtr& Item);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AddLoadoutItem(const FOMDSoftProtoPtr& Item, const TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION()
    void LoadoutItemRemoved(const FOMDInventoryArrayItem& Item);
    
    UFUNCTION()
    void LoadoutItemChanged(const FOMDInventoryArrayItem& Item);
    
    UFUNCTION()
    void LoadoutItemAdded(const FOMDInventoryArrayItem& Item);
    
public:
    UFUNCTION(BlueprintPure)
    void GetAllInventoryItems(TArray<UOMDInventoryItem*>& inventoryItems) const;
    
};

