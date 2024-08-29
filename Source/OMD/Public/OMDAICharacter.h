#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AICharacterDeathDelegateDelegate.h"
#include "EAITargetingType.h"
#include "EAggroGroup.h"
#include "ECharacterWeightClass.h"
#include "EComboPointCountType.h"
#include "EComboPointType.h"
#include "EDeathAnimationCategory.h"
#include "EGenericTeams.h"
#include "OMDAICharacterAbilityProto.h"
#include "OMDCharacter.h"
#include "OMDDeathParameters.h"
#include "OMDGibInformation.h"
#include "OMDSoftProtoPtr.h"
#include "Templates/SubclassOf.h"
#include "OMDAICharacter.generated.h"

class AActor;
class AOMDAIController;
class AOMDAISpawner;
class AOMDFlyoff;
class AOMDOnslaughtCoordinator;
class UBehaviorTree;
class UOMDAbilityParameters;
class UPhysicsAsset;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class OMD_API AOMDAICharacter : public AOMDCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* StandardPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* RagdolledPhysicsAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAICharacterDeathDelegate OnAICharacterDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* FXMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* MeshBudgeted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastMeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LastMeshRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Optimized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 OptimizedNavWalking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsResurrected: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDAISpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDOnslaughtCoordinator* OnslaughtCoordinator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPrespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDAIController* prespawnController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector RiftLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HeadshotBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDFlyoff> HeadshotFlyoffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDFlyoff> ComboFlyoffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDFlyoff> ImmunityFlyoffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDFlyoff> CoinFlyoffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDFlyoff> DamageCapFlyoffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FOMDDeathParameters DeathParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Shielded, meta=(AllowPrivateAccess=true))
    uint8 Shielded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAttacking, meta=(AllowPrivateAccess=true))
    bool bIsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CustomizationSeed;
    
public:
    AOMDAICharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UnFreeze();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnParticularPickup(UClass* pickupClass);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShouldHaveProtodata();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Shielded(bool previousValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAttacking();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_UnFreeze();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SpawnedFromRiftFX(FVector spawnFromRiftLocation);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_Freeze();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_EnteredRift(FVector NewRiftLocation, float Velocity);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_EnableRiftRushCollisionSettings();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_EnableInvincibleSettings();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_DisableRiftRushCollisionSettings();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_DisableInvincibleSettings();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_CacheRiftRushCollisionSettings();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_CacheInvincibleSettings();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnImmunityFlyoff();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnDamageCapFlyoff();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnComboFlyoff(int32 amount);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnCoinFlyoff(int32 amount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWispAiCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandardAiCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBarricadeDestroyer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRunnerMovement() const;
    
    UFUNCTION(BlueprintCallable)
    void GiveShield();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterWeightClass GetWeightClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAITargetingType GetTargetingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOMDAICharacterAbilityProto> GetSpecialAbilitiesProtos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnOnDeathCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetSpawnOnDeathAICharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRunsOverBarricades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetProtoName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDAICharacterAbilityProto GetPrimaryAbilityProto() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOMDAICharacterAbilityProto> GetOnDeathAbilitiesProtos() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAttacking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOMDGibInformation> GetGibInformation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCoinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBehaviorTree* GetAIBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAggroRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAggroGroup GetAggroGroup() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Freeze();
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_TailDropped();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_SpawnedFromRiftFX();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnteredRift(float Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnemyActorSet();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Gibbed(bool blood, bool headExploded, int32 gibCount, const TArray<FName>& socketsGibbed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DestroyFX(float LifeSpan, uint8 DeathType, EDeathAnimationCategory DeathAnimationCategory);
    
};

