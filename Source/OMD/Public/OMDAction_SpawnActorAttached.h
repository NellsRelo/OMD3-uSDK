#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnActorAttachedActionDelegateDelegate.h"
#include "OMDAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachmentRule -FallbackName=EAttachmentRule
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "OMDAction_SpawnActorAttached.generated.h"

class UOMDAction_SpawnActorAttached;
class USceneComponent;
class UOMDAbility;
class AOMDAbilityActor;
class AActor;

UCLASS()
class OMD_API UOMDAction_SpawnActorAttached : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FSpawnActorAttachedActionDelegate OnSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnActorAttachedActionDelegate OnFailed;
    
public:
    UOMDAction_SpawnActorAttached();
private:
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnActorAttached* SpawnActorAttached(UOMDAbility* ability, TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, bool endActionOnActorDestruction);
    
protected:
    UFUNCTION()
    void HandleSpawnedActorDestroyed(AActor* DestroyedActor);
    
};

