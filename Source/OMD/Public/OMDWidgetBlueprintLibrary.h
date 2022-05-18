#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EOMDInventoryOrdering.h"
#include "OMDSoftProtoPtr.h"
#include "OMDWidgetBlueprintLibrary.generated.h"

class UOMDInventoryItem;
class APlayerController;
class UUserWidget;
class UOMDModalWidget;

UCLASS(BlueprintType)
class OMD_API UOMDWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDWidgetBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static TArray<UOMDInventoryItem*> SortInventoryItems(const TArray<UOMDInventoryItem*>& Items, EOMDInventoryOrdering ordering);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* NavigateTo(APlayerController* OwningPlayer, FOMDSoftProtoPtr OMDScreenProto);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* NavigateBack();
    
    UFUNCTION(BlueprintPure)
    static bool IsModalInStack(TSubclassOf<UOMDModalWidget> Widget);
    
    UFUNCTION(BlueprintPure)
    static FText GetPlacementTypeDisplayName(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintPure)
    static float GetDPIScaleBasedOnSize(int32 Width, int32 Height);
    
    UFUNCTION(BlueprintPure)
    static void GetCurrentScreen(FOMDSoftProtoPtr& OMDScreenProto);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CloseAllModals();
    
};

