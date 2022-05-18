#include "OMDAction_SpawnActorAttached.h"
#include "Templates/SubclassOf.h"

class USceneComponent;
class UOMDAbility;
class AOMDAbilityActor;
class UOMDAction_SpawnActorAttached;
class AActor;

UOMDAction_SpawnActorAttached* UOMDAction_SpawnActorAttached::SpawnActorAttached(UOMDAbility* ability, TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, bool endActionOnActorDestruction) {
    return NULL;
}

void UOMDAction_SpawnActorAttached::HandleSpawnedActorDestroyed(AActor* DestroyedActor) {
}

UOMDAction_SpawnActorAttached::UOMDAction_SpawnActorAttached() {
}

