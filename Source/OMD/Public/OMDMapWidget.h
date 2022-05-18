#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OMDMapWidgetStyle.h"
#include "Components/Widget.h"
#include "OMDMapWidget.generated.h"

class UOMDMapData;

UCLASS()
class OMD_API UOMDMapWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDMapWidgetStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseWorldMapData: 1;
    
private:
    UPROPERTY(Export)
    UOMDMapData* MapData;
    
public:
    UOMDMapWidget();
    UFUNCTION(BlueprintCallable)
    void SetMapData(UOMDMapData* NewMapData);
    
};

