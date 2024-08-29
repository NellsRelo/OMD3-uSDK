#pragma once
#include "CoreMinimal.h"
#include "OMDActionKeyHint.h"
#include "OMDStaticKeyboardActionKeyHint.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDStaticKeyboardActionKeyHint : public UOMDActionKeyHint {
    GENERATED_BODY()
public:
    UOMDStaticKeyboardActionKeyHint();

    UFUNCTION(BlueprintCallable)
    void RefreshWidgetImage();
    
};

