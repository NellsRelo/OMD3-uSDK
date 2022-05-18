#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDCharacter.h"
#include "AICharacterDeathDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "SkeletalMeshComponentBudgeted.h"
#include "ECharacterWeightClass.h"
#include "OMDDeathParameters.h"
#include "OMDSoftProtoPtr.h"
#include "EGenericTeams.h"
#include "EComboPointType.h"
#include "EComboPointCountType.h"
#include "EAggroGroup.h"
#include "EAITargetingType.h"
#include "OMDAICharacterAbilityProto.h"
#include "OMDGibInformation.h"
#include "EDeathAnimationCategory.h"
#include "OMDAICharacter.generated.h"

class USkeletalMeshComponentBudgeted;
class UPhysicsAsset;
class UOMDAbilityParameters;
class AActor;
class AOMDAIController;
class AOMDAISpawner;
class AOMDOnslaughtCoordinator;
class AOMDFlyoff;
class UBehaviorTree;

UCLASS()
class OMD_API AOMDAICharacter : public AOMDCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPhysicsAsset* StandardPhysicsAsset;
    
    UPROPERTY(BlueprintReadOnly)
    UPhysicsAsset* RagdolledPhysicsAsset;
    
    UPROPERTY(BlueprintAssignable)
    FAICharacterDeathDelegate OnAICharacterDeath;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponentBudgeted* Skeleton;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponentBudgeted* FXMesh;
    
    UPROPERTY(Export)
    USkeletalMeshComponentBudgeted* MeshBudgeted;
    
    UPROPERTY()
    FVector LastMeshLocation;
    
    UPROPERTY()
    FRotator LastMeshRotation;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FName, AActor*> Attachments;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 Optimized: 1;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 OptimizedNavWalking: 1;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 bIsResurrected: 1;
    
public:
    UPROPERTY(BlueprintReadOnly)
    AOMDAISpawner* Spawner;
    
    UPROPERTY(BlueprintReadOnly)
    AOMDOnslaughtCoordinator* OnslaughtCoordinator;
    
    UPROPERTY(Replicated)
    bool bIsPrespawn;
    
    UPROPERTY()
    AOMDAIController* prespawnController;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    FVector RiftLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> HeadshotBoneNames;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AOMDFlyoff> HeadshotFlyoffClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AOMDFlyoff> ComboFlyoffClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AOMDFlyoff> ImmunityFlyoffClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AOMDFlyoff> CoinFlyoffClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AOMDFlyoff> DamageCapFlyoffClass;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FOMDDeathParameters DeathParams;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* Shield;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Shielded)
    uint8 Shielded: 1;
    
    UPROPERTY()
    float RangeModifier;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsAttacking)
    bool bIsAttacking;
    
    UPROPERTY(Replicated)
    int32 CustomizationSeed;
    
public:
    AOMDAICharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnFreeze();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnParticularPickup(UClass* pickupClass);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShouldHaveProtodata();
    
    UFUNCTION(BlueprintPure)
    bool ShouldBeEffectedByCyclopeanRaceAbility() const;
    
    UFUNCTION(BlueprintCallable)
    void SetProtodata(const FOMDSoftProtoPtr& proto);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsAttacking(bool isAttacking);
    
    UFUNCTION(BlueprintCallable)
    void SetHasBeenResurrected();
    
    UFUNCTION(BlueprintCallable)
    void SetAITeam(EGenericTeams Team);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveComboPointsOfType(EComboPointType comboPointType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveComboPointsByInstance(AActor* causerInstance, EComboPointType comboPointType, const FString& UniqueId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveComboPointsByClass(UClass* causerClass, EComboPointType comboPointType, const FString& UniqueId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddComboPoint(UClass* causerClass, float Timer, const FString& UniqueId, AActor* causerInstance, EComboPointCountType countType, EComboPointType comboPointType);
    
    UFUNCTION(BlueprintCallable)
    void RevertTargetingType();
    
    UFUNCTION(BlueprintCallable)
    void OverrideTargetingType(const EAITargetingType NewType);
    
    UFUNCTION()
    void OnRep_Shielded(bool previousValue);
    
protected:
    UFUNCTION()
    void OnRep_IsAttacking();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_UnFreeze();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_SpawnedFromRiftFX(FVector spawnFromRiftLocation);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_Freeze();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_EnteredRift(FVector NewRiftLocation, float Velocity);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_EnableRiftRushCollisionSettings();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_EnableInvincibleSettings();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_DisableRiftRushCollisionSettings();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_DisableInvincibleSettings();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_CacheRiftRushCollisionSettings();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_CacheInvincibleSettings();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SpawnImmunityFlyoff();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SpawnDamageCapFlyoff();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SpawnComboFlyoff(int32 amount);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SpawnCoinFlyoff(int32 amount);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWispAiCharacter();
    
    UFUNCTION(BlueprintPure)
    bool IsStandardAiCharacter();
    
    UFUNCTION(BlueprintPure)
    bool IsFlyer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBoss() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBarricadeDestroyer() const;
    
    UFUNCTION(BlueprintPure)
    bool HasRunnerMovement() const;
    
    UFUNCTION(BlueprintCallable)
    void GiveShield();
    
    UFUNCTION(BlueprintPure)
    ECharacterWeightClass GetWeightClass() const;
    
    UFUNCTION(BlueprintPure)
    EAITargetingType GetTargetingType() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FOMDAICharacterAbilityProto> GetSpecialAbilitiesProtos() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpawnOnDeathCount() const;
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetSpawnOnDeathAICharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRunsOverBarricades() const;
    
    UFUNCTION(BlueprintPure)
    FName GetProtoName() const;
    
    UFUNCTION(BlueprintPure)
    FOMDAICharacterAbilityProto GetPrimaryAbilityProto() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FOMDAICharacterAbilityProto> GetOnDeathAbilitiesProtos() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAttacking();
    
    UFUNCTION(BlueprintPure)
    TArray<FOMDGibInformation> GetGibInformation() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseCoinValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackRange() const;
    
    UFUNCTION(BlueprintPure)
    UBehaviorTree* GetAIBehavior() const;
    
    UFUNCTION(BlueprintPure)
    float GetAggroRadius() const;
    
    UFUNCTION(BlueprintPure)
    EAggroGroup GetAggroGroup() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Freeze();
    
    UFUNCTION()
    void EndGetUp();
    
    UFUNCTION(BlueprintCallable)
    void EnableRiftRushCollisionSettings();
    
    UFUNCTION(BlueprintCallable)
    void EnableInvincibleSettings();
    
    UFUNCTION(BlueprintCallable)
    void DisableRiftRushCollisionSettings();
    
    UFUNCTION(BlueprintCallable)
    void DisableInvincibleSettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableCharacterCollision(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    UOMDAbilityParameters* CreateAbilityParams(FOMDAICharacterAbilityProto protoToUse);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CacheRiftRushCollisionSettings();
    
    UFUNCTION(BlueprintCallable)
    void CacheInvincibleSettings();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_TailDropped();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_SpawnedFromRiftFX();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void BP_OnEnteredRift(float Velocity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnEnemyActorSet();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Gibbed(bool blood, bool headExploded, int32 gibCount, const TArray<FName>& socketsGibbed);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DestroyFX(float LifeSpan, uint8 DeathType, EDeathAnimationCategory DeathAnimationCategory);
    
};

