#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateWidgetStyle.h"
#include "OMDActionKeyHintStyle.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDActionKeyHintStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin LabelMargin;
    
    FOMDActionKeyHintStyle();
};

