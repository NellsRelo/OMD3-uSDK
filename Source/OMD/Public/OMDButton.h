#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "OMDButton.generated.h"

UCLASS()
class OMD_API UOMDButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName InputActionName;
    
    UOMDButton();
    UFUNCTION(BlueprintCallable)
    void SetInputActionName(FName Name);
    
    UFUNCTION(BlueprintPure)
    bool IsFocusedOrHovered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFocused() const;
    
    UFUNCTION(BlueprintCallable)
    void Click();
    
};

