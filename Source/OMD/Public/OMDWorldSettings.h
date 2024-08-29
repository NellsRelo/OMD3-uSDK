#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "OMDWorldSettings.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsWarScenario: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsHostOptimizedMinions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMapDataEnabled: 1;
    
    AOMDWorldSettings(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool UseReducedDeathFX();
    
};

