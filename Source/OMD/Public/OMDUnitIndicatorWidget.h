#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OMDUnitIndicatorStyle.h"
#include "Components/Widget.h"
#include "OMDUnitIndicatorWidget.generated.h"

UCLASS()
class OMD_API UOMDUnitIndicatorWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDUnitIndicatorStyle WidgetStyle;
    
public:
    UOMDUnitIndicatorWidget();
};

