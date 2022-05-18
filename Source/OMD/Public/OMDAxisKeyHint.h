#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OMDActionKeyHintStyle.h"
#include "Components/Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "OMDAxisKeyHint.generated.h"

UCLASS()
class OMD_API UOMDAxisKeyHint : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDActionKeyHintStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName axisName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scale;
    
public:
    UOMDAxisKeyHint();
    UFUNCTION(BlueprintCallable)
    void SetScale(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisName(FName Name);
    
};

