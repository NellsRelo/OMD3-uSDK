#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "OMDActionKeyHintStyle.h"
#include "OMDActionKeyHint.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDActionKeyHint : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDActionKeyHintStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
public:
    UOMDActionKeyHint();

    UFUNCTION(BlueprintCallable)
    void SetActionName(FName Name);
    
};

