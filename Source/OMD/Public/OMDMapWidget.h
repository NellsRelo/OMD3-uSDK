#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OMDMapWidgetStyle.h"
#include "OMDMapWidget.generated.h"

class UOMDMapData;

UCLASS(Blueprintable)
class OMD_API UOMDMapWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDMapWidgetStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseWorldMapData: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDMapData* MapData;
    
public:
    UOMDMapWidget();

    UFUNCTION(BlueprintCallable)
    void SetMapData(UOMDMapData* NewMapData);
    
};

