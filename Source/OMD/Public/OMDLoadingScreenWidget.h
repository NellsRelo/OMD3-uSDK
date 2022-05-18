#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OMDLoadingScreenWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDLoadingScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCloseOnLevelLoad: 1;
    
    UOMDLoadingScreenWidget();
    UFUNCTION(BlueprintCallable)
    void PlayLevelIntro();
    
};

