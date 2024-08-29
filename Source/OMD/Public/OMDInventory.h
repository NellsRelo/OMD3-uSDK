#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OMDInventoryArray.h"
#include "OMDInventoryArrayItem.h"
#include "OMDSoftProtoPtr.h"
#include "OMDInventory.generated.h"

class UOMDInventoryItem;

UCLASS(Blueprintable, NotPlaceable)
class OMD_API AOMDInventory : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FOMDInventoryArray LoadoutItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FOMDSoftProtoPtr, UOMDInventoryItem*> ItemInstances;
    
public:
    AOMDInventory(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveLoadoutItem(const FOMDSoftProtoPtr& Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddLoadoutItem(const FOMDSoftProtoPtr& Item, const TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintCallable)
    void LoadoutItemRemoved(const FOMDInventoryArrayItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void LoadoutItemChanged(const FOMDInventoryArrayItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void LoadoutItemAdded(const FOMDInventoryArrayItem& Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllInventoryItems(TArray<UOMDInventoryItem*>& inventoryItems) const;
    
};

