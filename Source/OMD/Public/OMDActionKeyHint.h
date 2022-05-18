#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OMDActionKeyHintStyle.h"
#include "Components/Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "OMDActionKeyHint.generated.h"

UCLASS()
class OMD_API UOMDActionKeyHint : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDActionKeyHintStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ActionName;
    
public:
    UOMDActionKeyHint();
    UFUNCTION(BlueprintCallable)
    void SetActionName(FName Name);
    
};

