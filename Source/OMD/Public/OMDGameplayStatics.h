#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "GameFramework/OnlineReplStructs.h"
#include "InputCoreTypes.h"
#include "EAsyncDialogueReason.h"
#include "EDeathAnimationCategory.h"
#include "OMDNewsProto.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStatusEffectProto.h"
#include "Templates/SubclassOf.h"
#include "OMDGameplayStatics.generated.h"

class AActor;
class AController;
class AOMDCharacter;
class AOMDInventory;
class AOMDPlayerAttachment;
class AOMDPlayerCharacter;
class AOMDWorldSettings;
class APlayerController;
class UAnimMontage;
class UOMDAsyncModal;
class UOMDDamageType;
class UOMDReticleWidget;
class UObject;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class OMD_API UOMDGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDGameplayStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime ToLocalTime(FDateTime date);
    
    UFUNCTION(BlueprintCallable)
    static bool ShowMultiplayerRestrictionOverlay(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    static UOMDAsyncModal* ShowAsyncModal(APlayerController* Controller, EAsyncDialogueReason reason);
    
    UFUNCTION(BlueprintCallable)
    static void SetSavedCultureCode(const FString& cultureCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<UOMDReticleWidget> MakeReticleSoftClassPtrFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<AOMDPlayerAttachment> MakePlayerAttchmentSoftClassPtrFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<AActor> MakeActorSoftClassPtrFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXboxPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWithEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWinGDKPlatform();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsStreamConnectSubscriptionSupported(const UObject* WorldContextObject, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsStreamConnectStreamingSupported(const UObject* WorldContextObject, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStadiaPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSoftProtoPtrValid(FOMDSoftProtoPtr protoPointer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPS5Platform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayStationPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMultiplayerRestricted(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLowEndPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadBackKey(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadAcceptKey(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEOSPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDesktopPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAchievementComplete(FOMDSoftProtoPtr OMDAchievementProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AOMDWorldSettings* GetWorldSettings(const UObject* WorldContextObject, bool bCheckStreamingPersistent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOMDStatusEffectProto GetStatusEffectProto(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSavedCultureCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerNickname(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AOMDInventory* GetPlayerInventory(const UObject* WorldContextObject, FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOMDNewsProto GetNewsProto(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetMontageSectionName(UAnimMontage* Montage, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMontageSectionCount(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCultureDiplayNames(TArray<FString>& Cultures);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCultureDiplayName(const FString& cultureCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCultureCodes(TArray<FString>& Cultures);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCultureCodeFromDisplayName(const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCompletedAchievements(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllStoryMissions(const UObject* WorldContextObject, TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllPlayerCharacters(const UObject* WorldContextObject, TArray<AOMDPlayerCharacter*>& characters);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorListFromComponentList(const TArray<UPrimitiveComponent*>& ComponentList, UClass* ActorClassFilter, TArray<AActor*>& OutActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatTimespan(FTimespan Timespan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatTime(FDateTime date);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatDateTime(FDateTime date);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatDate(FDateTime date);
    
    UFUNCTION(BlueprintCallable)
    static void DisplayOMDLog(const FString& logMessage);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DelayForFrames(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 Frames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleOverlapComponents(UObject* WorldContextObject, const FVector CapsulePos, FRotator CapsuleRot, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleOverlapActors(UObject* WorldContextObject, const FVector CapsulePos, const FRotator CapsuleRot, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateVelocityVarianceRectangularUsingVectors(FVector Origin, FVector targetPosition, FVector forwardVector, FVector rightVector, float baseVelocity, float xVelocityVariance, float yVelocityVariance, float xWidth, float yWidth, bool exponentialFalloff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateVelocityVarianceRectangularUsingActors(AActor* Origin, AActor* Target, float baseVelocity, float xVelocityVariance, float yVelocityVariance, float xWidth, float yWidth, bool exponentialFalloff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateVelocityVarianceRadialUsingVectors(FVector Origin, FVector targetPosition, float baseVelocity, float velocityVariance, float Radius, bool exponentialFalloff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateVelocityVarianceRadialUsingActors(AActor* Origin, AActor* Target, float baseVelocity, float velocityVariance, float Radius, bool exponentialFalloff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateVelocityBasedOnCharacterMass(float baseVelocity, AOMDCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalculateDirectionVarianceRectangularUsingVectors(FVector Origin, FVector targetPosition, FVector forwardVector, FVector rightVector, FVector baseDirection, float xAngleVariance, float yAngleVariance, float xWidth, float yWidth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalculateDirectionVarianceRectangularUsingActors(AActor* Origin, AActor* Target, FVector baseDirection, float xAngleVariance, float yAngleVariance, float xWidth, float yWidth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalculateDirectionVarianceRadialUsingVectors(FVector Origin, FVector targetPosition, FVector UpVector, float angleVariance, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalculateDirectionVarianceRadialUsingActors(AActor* Origin, AActor* Target, float angleVariance, float Radius, FVector UpVector);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BP_UpdateOverlaps(UObject* WorldContextObject, AActor* callingActor, UShapeComponent* overlappingComponent, const TEnumAsByte<ECollisionChannel> overlapCollisionChannel, UPARAM(Ref) TArray<AActor*>& storedOverlappingActors, TArray<AActor*>& outStoredOverlappingActors, UPARAM(Ref) TArray<AActor*>& BeginOverlapActors, TArray<AActor*>& outBeginOverlapactors, UPARAM(Ref) TArray<AActor*>& EndOverlapActors, TArray<AActor*>& outEndOverlapActors, TArray<AActor*> IgnoreActors);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AutoLogin(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 localUserNum, bool& bOutSuccess);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& Origin, float OuterRadius, AController* eventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, float impulseForceFalloff, FVector HitDirectionOverride, FVector hitDirectionOriginOffset, float MinimumDamage, float InnerRadius, float DamageFalloff, TEnumAsByte<ECollisionChannel> damagePreventionChannel, bool ignoreTeams, bool dotDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyPointDamage(AActor* DamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& hitFromDirection, const FHitResult& HitInfo, AController* eventInstigator, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, bool ignoreTeams, bool dotDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyDamage(AActor* DamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, AController* eventInstigator, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, bool IgnoreShielding, bool ignoreTeams, bool dotDamage);
    
};

