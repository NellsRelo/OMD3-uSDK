#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "OMDUnitIndicatorStyle.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDUnitIndicatorStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush FillImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateFontInfo Font;
    
    FOMDUnitIndicatorStyle();
};

