#include "OMDInventory.h"
#include "Net/UnrealNetwork.h"

AOMDInventory::AOMDInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AOMDInventory::Server_RemoveLoadoutItem_Implementation(const FOMDSoftProtoPtr& Item) {
}
bool AOMDInventory::Server_RemoveLoadoutItem_Validate(const FOMDSoftProtoPtr& Item) {
    return true;
}

void AOMDInventory::Server_AddLoadoutItem_Implementation(const FOMDSoftProtoPtr& Item, const TArray<FOMDSoftProtoPtr>& Upgrades) {
}
bool AOMDInventory::Server_AddLoadoutItem_Validate(const FOMDSoftProtoPtr& Item, const TArray<FOMDSoftProtoPtr>& Upgrades) {
    return true;
}

void AOMDInventory::LoadoutItemRemoved(const FOMDInventoryArrayItem& Item) {
}

void AOMDInventory::LoadoutItemChanged(const FOMDInventoryArrayItem& Item) {
}

void AOMDInventory::LoadoutItemAdded(const FOMDInventoryArrayItem& Item) {
}

void AOMDInventory::GetAllInventoryItems(TArray<UOMDInventoryItem*>& inventoryItems) const {
}

void AOMDInventory::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDInventory, LoadoutItems);
}


