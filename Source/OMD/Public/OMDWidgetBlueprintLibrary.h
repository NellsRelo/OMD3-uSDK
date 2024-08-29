#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOMDInventoryOrdering.h"
#include "OMDSoftProtoPtr.h"
#include "Templates/SubclassOf.h"
#include "OMDWidgetBlueprintLibrary.generated.h"

class APlayerController;
class UOMDInventoryItem;
class UOMDModalWidget;
class UUserWidget;

UCLASS(Blueprintable)
class OMD_API UOMDWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDWidgetBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UOMDInventoryItem*> SortInventoryItems(const TArray<UOMDInventoryItem*>& Items, EOMDInventoryOrdering ordering);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* NavigateTo(APlayerController* OwningPlayer, FOMDSoftProtoPtr OMDScreenProto);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* NavigateBack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsModalInStack(TSubclassOf<UOMDModalWidget> Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlacementTypeDisplayName(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDPIScaleBasedOnSize(int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentScreen(FOMDSoftProtoPtr& OMDScreenProto);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CloseAllModals();
    
};

