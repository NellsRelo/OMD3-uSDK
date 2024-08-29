#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "LaunchSocketInfo.h"
#include "OMDPlayerAttachment.h"
#include "OMDSoftProtoPtr.h"
#include "Templates/SubclassOf.h"
#include "OMDWeapon.generated.h"

class AActor;
class UCapsuleComponent;
class UOMDAbility;
class UOMDAbilitySystemComponent;
class UOMDInventoryItem_Weapon;
class UShapeComponent;

UCLASS(Abstract, Blueprintable)
class OMD_API AOMDWeapon : public AOMDPlayerAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Protodata, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* overlappingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* overlappingCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* wielderActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDAbilitySystemComponent* abilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BeginOverlapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EndOverlapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle overlapTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr abilityProto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOMDAbility> AbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchSocketInfo LaunchSocketOverride;
    
public:
    AOMDWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupOverlapPerfMode(UShapeComponent* overlapComponent, FOMDSoftProtoPtr OMDAbilityProto, TEnumAsByte<ECollisionChannel> OverlapChannel, float updateTickInterval, float initialDelay, float verticalReachAbove, float verticalReachBelow, float extraRange, bool updateOnDamageStart, bool updateOnDamageEnd, bool singleDamagePerSwing, bool hitEnemiesbehind, bool drawDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageActive(bool isDamageActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Protodata();
    
public:
    UFUNCTION(BlueprintCallable)
    void InvalidateOverlapPerfMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOverlap(UOMDAbility* ability, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetReticleLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLaunchLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLaunchDirection(FVector& launchLocation, FVector& launchDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHitLocation(const FVector launchLocation, const FVector reticleLocation, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDamageActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseAbility(UOMDAbility* ability) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ApplyBloomAttributeOverrides(UOMDInventoryItem_Weapon* weaponItem);
    
};

