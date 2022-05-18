#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
#include "OMDWorldSettings.generated.h"

UCLASS()
class OMD_API AOMDWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsWarScenario: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    uint8 bIsHostOptimizedMinions: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bMapDataEnabled: 1;
    
    AOMDWorldSettings();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool UseReducedDeathFX();
    
};

