#pragma once
#include "CoreMinimal.h"
#include "OMDProjectile.h"
#include "OMDDamageableProjectile.generated.h"

class AController;
class AActor;

UCLASS()
class OMD_API AOMDDamageableProjectile : public AOMDProjectile {
    GENERATED_BODY()
public:
    AOMDDamageableProjectile();
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_DamageTaken(float Damage, bool isRadialDamage, AController* eventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_DamageTaken(float Damage, bool isRadialDamage, AController* eventInstigator, AActor* DamageCauser);
    
};

