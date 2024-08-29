#pragma once
#include "CoreMinimal.h"
#include "OMDActionKeyHint.h"
#include "OMDStaticControllerActionKeyHint.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDStaticControllerActionKeyHint : public UOMDActionKeyHint {
    GENERATED_BODY()
public:
    UOMDStaticControllerActionKeyHint();

    UFUNCTION(BlueprintCallable)
    void RefreshWidgetImage();
    
};

