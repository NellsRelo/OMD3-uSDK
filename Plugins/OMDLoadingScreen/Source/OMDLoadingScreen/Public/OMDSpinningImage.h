#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OMDSpinningImage.generated.h"

UCLASS(Blueprintable)
class OMDLOADINGSCREEN_API UOMDSpinningImage : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool clockwise;
    
public:
    UOMDSpinningImage();
    UFUNCTION(BlueprintCallable)
    void SetPeriod(float NewPeriod);
    
    UFUNCTION(BlueprintCallable)
    void SetClockwise(bool NewClockwise);
    
};

