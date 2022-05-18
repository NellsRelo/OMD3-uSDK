#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDAICharacter.h"
#include "EChromaticaElements.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDAIFlyerCharacter.generated.h"

UCLASS()
class OMD_API AOMDAIFlyerCharacter : public AOMDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsSmallCharacter: 1;
    
    UPROPERTY(BlueprintReadOnly)
    EChromaticaElements CurrentElement;
    
public:
    AOMDAIFlyerCharacter();
protected:
    UFUNCTION()
    void OnHitGroundDeath(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_ChangeElement(EChromaticaElements newElement);
    
};

