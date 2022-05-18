#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDPlayerAttachment.h"
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "LaunchSocketInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDWeapon.generated.h"

class UShapeComponent;
class UCapsuleComponent;
class AActor;
class UOMDInventoryItem_Weapon;
class UOMDAbilitySystemComponent;
class UOMDAbility;

UCLASS(Abstract)
class OMD_API AOMDWeapon : public AOMDPlayerAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_Protodata)
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(Export)
    UShapeComponent* overlappingComponent;
    
    UPROPERTY(Export)
    UCapsuleComponent* overlappingCapsule;
    
    UPROPERTY()
    AActor* wielderActor;
    
    UPROPERTY(Export)
    UOMDAbilitySystemComponent* abilitySystem;
    
    UPROPERTY()
    TArray<AActor*> OverlappingActors;
    
    UPROPERTY()
    TArray<AActor*> BeginOverlapActors;
    
    UPROPERTY()
    TArray<AActor*> EndOverlapActors;
    
    UPROPERTY()
    TArray<AActor*> IgnoreActors;
    
    UPROPERTY()
    FTimerHandle overlapTimer;
    
    UPROPERTY()
    FOMDSoftProtoPtr abilityProto;
    
    UPROPERTY()
    TSubclassOf<UOMDAbility> AbilityClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLaunchSocketInfo LaunchSocketOverride;
    
public:
    AOMDWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetupOverlapPerfMode(UShapeComponent* overlapComponent, FOMDSoftProtoPtr OMDAbilityProto, TEnumAsByte<ECollisionChannel> OverlapChannel, float updateTickInterval, float initialDelay, float verticalReachAbove, float verticalReachBelow, float extraRange, bool updateOnDamageStart, bool updateOnDamageEnd, bool singleDamagePerSwing, bool hitEnemiesbehind, bool drawDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageActive(bool isDamageActive);
    
protected:
    UFUNCTION()
    void OnRep_Protodata();
    
public:
    UFUNCTION(BlueprintCallable)
    void InvalidateOverlapPerfMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleOverlap(UOMDAbility* ability, AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    FVector GetReticleLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLaunchLocation() const;
    
    UFUNCTION(BlueprintPure)
    void GetLaunchDirection(FVector& launchLocation, FVector& launchDirection);
    
    UFUNCTION(BlueprintPure)
    FVector GetHitLocation(const FVector launchLocation, const FVector reticleLocation, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDamageActive();
    
    UFUNCTION(BlueprintPure)
    bool CanUseAbility(UOMDAbility* ability) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ApplyBloomAttributeOverrides(UOMDInventoryItem_Weapon* weaponItem);
    
};

