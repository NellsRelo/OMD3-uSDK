#pragma once
#include "CoreMinimal.h"
#include "OMDProjectile.h"
#include "OMDDamageableProjectile.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable)
class OMD_API AOMDDamageableProjectile : public AOMDProjectile {
    GENERATED_BODY()
public:
    AOMDDamageableProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_DamageTaken(float Damage, bool isRadialDamage, AController* eventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_DamageTaken(float Damage, bool isRadialDamage, AController* eventInstigator, AActor* DamageCauser);
    
};

