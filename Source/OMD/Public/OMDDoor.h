#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "OMDDoorDamageTakenDelegateDelegate.h"
#include "OMDDoorOpenedDelegateDelegate.h"
#include "OMDMapDisplayInterface.h"
#include "OMDTargetableInterface.h"
#include "OMDDoor.generated.h"

class UAIPerceptionStimuliSourceComponent;
class UBoxComponent;
class UMeshComponent;
class UNavPowerObstructionComponent;
class UOMDDamageType;
class UOMDMapDisplayComponent;

UCLASS(Blueprintable)
class OMD_API AOMDDoor : public AActor, public IGenericTeamAgentInterface, public IOMDTargetableInterface, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BeginOverlapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EndOverlapActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsExpectingMobs: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDDoorDamageTakenDelegate OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDDoorOpenedDelegate OnDoorOpened;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavPowerObstructionComponent* NavPowerObstructionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MinionCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartsOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayerPassthrough: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAttackable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotSpacing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> SlotOccupants;
    
public:
    AOMDDoor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool ShouldAttack();
    
    UFUNCTION(BlueprintCallable)
    int32 RequestSlot(AActor* slotOccupant);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseSlot(AActor* slotOccupant);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndOverlap_MinionCollider(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_DamageTaken(float Damage, const FDamageEvent& Event, AActor* Causer);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasAvailableSlots();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackPoint(FVector attackSourceLocation, AActor* attackSource);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcSlotLocation(int32 SlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DoorOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DamageTaken(float Damage, const UOMDDamageType* Type, AActor* Causer);
    

    // Fix for true pure virtual functions not being implemented
};

