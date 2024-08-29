#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OMDUnitIndicatorStyle.h"
#include "OMDUnitIndicatorWidget.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDUnitIndicatorWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDUnitIndicatorStyle WidgetStyle;
    
public:
    UOMDUnitIndicatorWidget();

};

