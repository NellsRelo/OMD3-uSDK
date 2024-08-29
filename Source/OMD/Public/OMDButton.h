#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "OMDButton.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputActionName;
    
    UOMDButton();

    UFUNCTION(BlueprintCallable)
    void SetInputActionName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusedOrHovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocused() const;
    
    UFUNCTION(BlueprintCallable)
    void Click();
    
};

