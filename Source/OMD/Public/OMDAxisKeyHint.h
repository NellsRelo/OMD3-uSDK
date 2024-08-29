#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "OMDActionKeyHintStyle.h"
#include "OMDAxisKeyHint.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDAxisKeyHint : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDActionKeyHintStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName axisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
public:
    UOMDAxisKeyHint();

    UFUNCTION(BlueprintCallable)
    void SetScale(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisName(FName Name);
    
};

