#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
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

