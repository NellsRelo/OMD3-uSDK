#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OMDLoadingScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDLoadingScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCloseOnLevelLoad: 1;
    
    UOMDLoadingScreenWidget();

    UFUNCTION(BlueprintCallable)
    void PlayLevelIntro();
    
};

