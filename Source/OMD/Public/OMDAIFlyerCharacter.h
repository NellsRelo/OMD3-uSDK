#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EChromaticaElements.h"
#include "OMDAICharacter.h"
#include "OMDAIFlyerCharacter.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDAIFlyerCharacter : public AOMDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSmallCharacter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChromaticaElements CurrentElement;
    
public:
    AOMDAIFlyerCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHitGroundDeath(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_ChangeElement(EChromaticaElements newElement);
    
};

