#pragma once
#include "CoreMinimal.h"
#include "OMDAsyncTaskShowModalWidgetDelegateDelegate.generated.h"

class UOMDModalWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDAsyncTaskShowModalWidgetDelegate, UOMDModalWidget*, ModalWidget);

