#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "NavPowerPlayerMovementComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVPOWER_API UNavPowerPlayerMovementComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RepulsorIDFlag;
    
    UNavPowerPlayerMovementComponent();
};

