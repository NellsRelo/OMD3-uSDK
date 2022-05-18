#pragma once
#include "CoreMinimal.h"
#include "OMDDoorDamageTakenDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDDoorOpenedDelegateDelegate.h"
#include "OMDMapDisplayInterface.h"
#include "GenericTeamAgentInterface.h"
#include "OMDTargetableInterface.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "NavPowerPlayerMovementComponent.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDDoor.generated.h"

class UAIPerceptionStimuliSourceComponent;
class UOMDMapDisplayComponent;
class UNavPowerObstructionComponent;
class UOMDDamageType;
class UMeshComponent;
class UBoxComponent;

UCLASS()
class OMD_API AOMDDoor : public AActor, public IGenericTeamAgentInterface, public IOMDTargetableInterface, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY()
    TArray<AActor*> OverlappingActors;
    
    UPROPERTY()
    TArray<AActor*> BeginOverlapActors;
    
    UPROPERTY()
    TArray<AActor*> EndOverlapActors;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 bIsExpectingMobs: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOMDDoorDamageTakenDelegate OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable)
    FOMDDoorOpenedDelegate OnDoorOpened;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UNavPowerObstructionComponent* NavPowerObstructionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UMeshComponent* Mesh;
    
    UPROPERTY(EditAnywhere, Export)
    UBoxComponent* MinionCollider;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsOpen: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bStartsOpen: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bPlayerPassthrough: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsAttackable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Health)
    float Health;
    
    UPROPERTY(BlueprintReadOnly)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlotSpacing;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> SlotOccupants;
    
public:
    AOMDDoor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldAttack();
    
    UFUNCTION(BlueprintCallable)
    int32 RequestSlot(AActor* slotOccupant);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseSlot(AActor* slotOccupant);
    
protected:
    UFUNCTION()
    void OnRep_Health();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndOverlap_MinionCollider(AActor* Actor);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_DamageTaken(float Damage, const FDamageEvent& Event, AActor* Causer);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasAvailableSlots();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackPoint(FVector attackSourceLocation, AActor* attackSource);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcSlotLocation(int32 SlotIndex);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_DoorOpened();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DamageTaken(float Damage, const UOMDDamageType* Type, AActor* Causer);
    
    
    // Fix for true pure virtual functions not being implemented
};

