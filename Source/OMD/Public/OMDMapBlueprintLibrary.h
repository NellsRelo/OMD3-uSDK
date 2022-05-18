#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDMapManagerWidgetRequestedBPCallbackDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OMDMapManagerPingRequestedBPCallbackDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "OMDMapBlueprintLibrary.generated.h"

class AActor;
class APlayerController;
class UUserWidget;
class UTexture2D;

UCLASS(BlueprintType)
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
    
    UFUNCTION(BlueprintPure)
    static void GetRotationOnMap(APlayerController* OwningPlayer, AActor* Actor, float& Rotation);
    
    UFUNCTION(BlueprintPure)
    static UTexture2D* GetMapTexture(APlayerController* OwningPlayer);
    
    UFUNCTION(BlueprintPure)
    static void GetLocationOnMap(APlayerController* OwningPlayer, AActor* Actor, FVector2D mapSize, FVector2D& Location);
    
    UFUNCTION(BlueprintCallable)
    static void AddPingCallback(const FOMDMapManagerPingRequestedBPCallback& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void AddMapWidgetCallback(const FOMDMapManagerWidgetRequestedBPCallback& Callback);
    
};

