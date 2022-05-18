#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "NavPowerObstructionComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVPOWER_API UNavPowerObstructionComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 PassthroughFlags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bStartsOff: 1;
    
protected:
    UPROPERTY()
    uint32 ObstructionFlags;
    
public:
    UNavPowerObstructionComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveObstruction();
    
    UFUNCTION(BlueprintCallable)
    void CreateObstruction();
    
};

