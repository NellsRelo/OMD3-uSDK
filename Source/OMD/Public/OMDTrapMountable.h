#pragma once
#include "CoreMinimal.h"
#include "OMDTrap.h"
#include "OMDTrapMountable.generated.h"

class AOMDPlayerCharacter;
class AOMDPlayerController;
class UChildActorComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTrapMountable : public AOMDTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OccupyingPlayerPawn, meta=(AllowPrivateAccess=true))
    AOMDPlayerCharacter* OccupyingPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* TrapPawnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterAttachBoneName;
    
public:
    AOMDTrapMountable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OccupyingPlayerPawn(AOMDPlayerCharacter* previousValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOMDPlayerCharacter* GetOccupyingPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOMDPlayerController* GetOccupyingPlayerController() const;
    
};

