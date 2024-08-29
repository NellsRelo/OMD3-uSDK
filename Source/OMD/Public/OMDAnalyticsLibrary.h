#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OMDSoftProtoPtr.h"
#include "OMDAnalyticsLibrary.generated.h"

class AOMDPlayerController;
class UObject;

UCLASS(Blueprintable)
class OMD_API UOMDAnalyticsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDAnalyticsLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopAnalyticsSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartAnalyticsSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogStreamConnectChanged(UObject* WorldContextObject, bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogSpellbookUpgradePurchased(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr, int32 tier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogSpellbookUniqueUpgradePurchased(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr, FOMDSoftProtoPtr upgradePtr);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogSpellbookRespecEvent(UObject* WorldContextObject, FOMDSoftProtoPtr protoPtr);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogSpellbookPurchase(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogSkullsAwardedEvent(UObject* WorldContextObject, int32 skulls);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogScenarioWon(UObject* WorldContextObject, int32 inSkullScore, float InTime, int32 inRiftPoints);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogScenarioStart(UObject* WorldContextObject, AOMDPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogScenarioRetry(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogScenarioQuit(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogScenarioLoss(UObject* WorldContextObject, int32 wave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRespecAllEvent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomSeedReroll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomDebuffSelection(UObject* WorldContextObject, int32 tier, int32 missionIndex, int32 buffIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomDebuffRerolled(UObject* WorldContextObject, FOMDSoftProtoPtr debuffPtr);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomDebuffRejected(UObject* WorldContextObject, const FString& Map, FOMDSoftProtoPtr debuffPtr, float Seed);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomDebuffGottenOnReroll(UObject* WorldContextObject, FOMDSoftProtoPtr debuffPtr);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomDebuffAccepted(UObject* WorldContextObject, const FString& Map, FOMDSoftProtoPtr debuffPtr, float Seed);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomBuffSelection(UObject* WorldContextObject, int32 tier, int32 buffIndex);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomBuffRejected(UObject* WorldContextObject, FOMDSoftProtoPtr buffPtr, float Seed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogRandomBuffChosen(UObject* WorldContextObject, FOMDSoftProtoPtr buffPtr, float Seed);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogNPEResponse(UObject* WorldContextObject, int32 npeNum, bool Response);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogHelpScreenVisited(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogEndlessFinished(UObject* WorldContextObject, int32 inSkullScore, int32 waves);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAllowedToCollectAnalytics(UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ConsentChanged(UObject* WorldContextObject, bool isConsentGranted);
    
};

