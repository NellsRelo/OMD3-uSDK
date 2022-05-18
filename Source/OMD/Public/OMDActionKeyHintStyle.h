#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "OMDActionKeyHintStyle.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDActionKeyHintStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin LabelMargin;
    
    FOMDActionKeyHintStyle();
};

