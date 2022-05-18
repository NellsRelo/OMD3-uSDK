#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OMDSoftProtoPtr.h"
#include "OMDAnalyticsLibrary.generated.h"

class UObject;
class AOMDPlayerController;

UCLASS(BlueprintType)
class OMD_API UOMDAnalyticsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDAnalyticsLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopAnalyticsSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StartAnalyticsSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void LogStreamConnectChanged(UObject* WorldContextObject, bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void LogSpellbookUpgradePurchased(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr, int32 tier);
    
    UFUNCTION(BlueprintCallable)
    static void LogSpellbookUniqueUpgradePurchased(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr, FOMDSoftProtoPtr upgradePtr);
    
    UFUNCTION(BlueprintCallable)
    static void LogSpellbookRespecEvent(UObject* WorldContextObject, FOMDSoftProtoPtr protoPtr);
    
    UFUNCTION(BlueprintCallable)
    static void LogSpellbookPurchase(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr);
    
    UFUNCTION(BlueprintCallable)
    static void LogSkullsAwardedEvent(UObject* WorldContextObject, int32 skulls);
    
    UFUNCTION(BlueprintCallable)
    static void LogScenarioWon(UObject* WorldContextObject, int32 inSkullScore, float InTime, int32 inRiftPoints);
    
    UFUNCTION(BlueprintCallable)
    static void LogScenarioStart(UObject* WorldContextObject, AOMDPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void LogScenarioRetry(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void LogScenarioQuit(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void LogScenarioLoss(UObject* WorldContextObject, int32 wave);
    
    UFUNCTION(BlueprintCallable)
    static void LogRespecAllEvent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void LogRandomSeedReroll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void LogRandomDebuffSelection(UObject* WorldContextObject, int32 tier, int32 missionIndex, int32 buffIndex);
    
    UFUNCTION(BlueprintCallable)
    static void LogRandomDebuffRerolled(UObject* WorldContextObject, FOMDSoftProtoPtr debuffPtr);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void LogRandomDebuffRejected(UObject* WorldContextObject, const FString& Map, FOMDSoftProtoPtr debuffPtr, float Seed);
    
public:
    UFUNCTION(BlueprintCallable)
    static void LogRandomDebuffGottenOnReroll(UObject* WorldContextObject, FOMDSoftProtoPtr debuffPtr);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void LogRandomDebuffAccepted(UObject* WorldContextObject, const FString& Map, FOMDSoftProtoPtr debuffPtr, float Seed);
    
public:
    UFUNCTION(BlueprintCallable)
    static void LogRandomBuffSelection(UObject* WorldContextObject, int32 tier, int32 buffIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void LogRandomBuffRejected(UObject* WorldContextObject, FOMDSoftProtoPtr buffPtr, float Seed);
    
    UFUNCTION(BlueprintCallable)
    static void LogRandomBuffChosen(UObject* WorldContextObject, FOMDSoftProtoPtr buffPtr, float Seed);
    
public:
    UFUNCTION(BlueprintCallable)
    static void LogNPEResponse(UObject* WorldContextObject, int32 npeNum, bool Response);
    
    UFUNCTION(BlueprintCallable)
    static void LogHelpScreenVisited(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void LogEndlessFinished(UObject* WorldContextObject, int32 inSkullScore, int32 waves);
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool IsAllowedToCollectAnalytics(UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintCallable)
    static void ConsentChanged(UObject* WorldContextObject, bool isConsentGranted);
    
};

