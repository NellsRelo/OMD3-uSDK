#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "OMDAction.h"
#include "SpawnActorAttachedActionDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "OMDAction_SpawnActorAttached.generated.h"

class AActor;
class AOMDAbilityActor;
class UOMDAbility;
class UOMDAction_SpawnActorAttached;
class USceneComponent;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SpawnActorAttached : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnActorAttachedActionDelegate OnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnActorAttachedActionDelegate OnFailed;
    
public:
    UOMDAction_SpawnActorAttached();

private:
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnActorAttached* SpawnActorAttached(UOMDAbility* ability, TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, bool endActionOnActorDestruction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSpawnedActorDestroyed(AActor* DestroyedActor);
    
};

