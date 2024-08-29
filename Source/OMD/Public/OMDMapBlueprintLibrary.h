#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OMDMapManagerPingRequestedBPCallbackDelegate.h"
#include "OMDMapManagerWidgetRequestedBPCallbackDelegate.h"
#include "Templates/SubclassOf.h"
#include "OMDMapBlueprintLibrary.generated.h"

class AActor;
class APlayerController;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable)
class OMD_API UOMDMapBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDMapBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void RequestPing(const FUniqueNetIdRepl& netId, AActor* Actor, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    static void RequestMapWidget(AActor* Actor, TSubclassOf<UUserWidget> Widget);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePingCallback(const FOMDMapManagerPingRequestedBPCallback& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveMapWidgetCallback(const FOMDMapManagerWidgetRequestedBPCallback& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRotationOnMap(APlayerController* OwningPlayer, AActor* Actor, float& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetMapTexture(APlayerController* OwningPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLocationOnMap(APlayerController* OwningPlayer, AActor* Actor, FVector2D mapSize, FVector2D& Location);
    
    UFUNCTION(BlueprintCallable)
    static void AddPingCallback(const FOMDMapManagerPingRequestedBPCallback& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void AddMapWidgetCallback(const FOMDMapManagerWidgetRequestedBPCallback& Callback);
    
};

