#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OMDNewsProto.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EAsyncDialogueReason.h"
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "OMDStatusEffectProto.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "EDeathAnimationCategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDGameplayStatics.generated.h"

class AOMDPlayerCharacter;
class APlayerController;
class UOMDAsyncModal;
class UObject;
class UOMDReticleWidget;
class AOMDPlayerAttachment;
class AActor;
class AOMDWorldSettings;
class UShapeComponent;
class AOMDInventory;
class UAnimMontage;
class UPrimitiveComponent;
class AOMDCharacter;
class AController;
class UOMDDamageType;

UCLASS(BlueprintType)
class OMD_API UOMDGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDGameplayStatics();
    UFUNCTION(BlueprintPure)
    static FDateTime ToLocalTime(FDateTime date);
    
    UFUNCTION(BlueprintCallable)
    static bool ShowMultiplayerRestrictionOverlay(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    static UOMDAsyncModal* ShowAsyncModal(APlayerController* Controller, EAsyncDialogueReason reason);
    
    UFUNCTION(BlueprintCallable)
    static void SetSavedCultureCode(const FString& cultureCode);
    
    UFUNCTION(BlueprintPure)
    static TSoftClassPtr<UOMDReticleWidget> MakeReticleSoftClassPtrFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<AOMDPlayerAttachment> MakePlayerAttchmentSoftClassPtrFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<AActor> MakeActorSoftClassPtrFromString(const FString& String);
    
    UFUNCTION(BlueprintPure)
    static bool IsXboxPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsWithEditor();
    
    UFUNCTION(BlueprintCallable)
    static bool IsStreamConnectSubscriptionSupported(const UObject* WorldContextObject, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStreamConnectStreamingSupported(const UObject* WorldContextObject, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    static bool IsStadiaPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsSoftProtoPtrValid(FOMDSoftProtoPtr protoPointer);
    
    UFUNCTION(BlueprintPure)
    static bool IsPS5Platform();
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayStationPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsMultiplayerRestricted(APlayerController* Player);
    
    UFUNCTION(BlueprintPure)
    static bool IsLowEndPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsGamepadBackKey(FKey Key);
    
    UFUNCTION(BlueprintPure)
    static bool IsGamepadAcceptKey(FKey Key);
    
    UFUNCTION(BlueprintPure)
    static bool IsDesktopPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsDebugBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsAchievementComplete(FOMDSoftProtoPtr OMDAchievementProto);
    
    UFUNCTION(BlueprintPure)
    static AOMDWorldSettings* GetWorldSettings(const UObject* WorldContextObject, bool bCheckStreamingPersistent);
    
    UFUNCTION(BlueprintPure)
    static FOMDStatusEffectProto GetStatusEffectProto(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintPure)
    static FString GetSavedCultureCode();
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintPure)
    static FString GetPlayerNickname(APlayerController* Player);
    
    UFUNCTION(BlueprintPure)
    static AOMDInventory* GetPlayerInventory(const UObject* WorldContextObject, FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintPure)
    static FOMDNewsProto GetNewsProto(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintPure)
    static FName GetMontageSectionName(UAnimMontage* Montage, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMontageSectionCount(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintPure)
    static void GetCultureDiplayNames(TArray<FString>& Cultures);
    
    UFUNCTION(BlueprintPure)
    static FString GetCultureDiplayName(const FString& cultureCode);
    
    UFUNCTION(BlueprintPure)
    static void GetCultureCodes(TArray<FString>& Cultures);
    
    UFUNCTION(BlueprintPure)
    static FString GetCultureCodeFromDisplayName(const FString& DisplayName);
    
    UFUNCTION(BlueprintPure)
    static void GetCompletedAchievements(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllStoryMissions(const UObject* WorldContextObject, TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllPlayerCharacters(const UObject* WorldContextObject, TArray<AOMDPlayerCharacter*>& characters);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorListFromComponentList(const TArray<UPrimitiveComponent*>& ComponentList, UClass* ActorClassFilter, TArray<AActor*>& OutActorList);
    
    UFUNCTION(BlueprintPure)
    static FText FormatTimespan(FTimespan Timespan);
    
    UFUNCTION(BlueprintPure)
    static FText FormatTime(FDateTime date);
    
    UFUNCTION(BlueprintPure)
    static FText FormatDateTime(FDateTime date);
    
    UFUNCTION(BlueprintPure)
    static FText FormatDate(FDateTime date);
    
    UFUNCTION(BlueprintCallable)
    static void DisplayOMDLog(const FString& logMessage);
    
    UFUNCTION(BlueprintCallable)
    static void DelayForFrames(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 Frames);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleOverlapComponents(UObject* WorldContextObject, const FVector CapsulePos, FRotator CapsuleRot, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleOverlapActors(UObject* WorldContextObject, const FVector CapsulePos, const FRotator CapsuleRot, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintPure)
    static float CalculateVelocityVarianceRectangularUsingVectors(FVector Origin, FVector targetPosition, FVector forwardVector, FVector rightVector, float baseVelocity, float xVelocityVariance, float yVelocityVariance, float xWidth, float yWidth, bool exponentialFalloff);
    
    UFUNCTION(BlueprintPure)
    static float CalculateVelocityVarianceRectangularUsingActors(AActor* Origin, AActor* Target, float baseVelocity, float xVelocityVariance, float yVelocityVariance, float xWidth, float yWidth, bool exponentialFalloff);
    
    UFUNCTION(BlueprintPure)
    static float CalculateVelocityVarianceRadialUsingVectors(FVector Origin, FVector targetPosition, float baseVelocity, float velocityVariance, float Radius, bool exponentialFalloff);
    
    UFUNCTION(BlueprintPure)
    static float CalculateVelocityVarianceRadialUsingActors(AActor* Origin, AActor* Target, float baseVelocity, float velocityVariance, float Radius, bool exponentialFalloff);
    
    UFUNCTION(BlueprintPure)
    static float CalculateVelocityBasedOnCharacterMass(float baseVelocity, AOMDCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    static FVector CalculateDirectionVarianceRectangularUsingVectors(FVector Origin, FVector targetPosition, FVector forwardVector, FVector rightVector, FVector baseDirection, float xAngleVariance, float yAngleVariance, float xWidth, float yWidth);
    
    UFUNCTION(BlueprintPure)
    static FVector CalculateDirectionVarianceRectangularUsingActors(AActor* Origin, AActor* Target, FVector baseDirection, float xAngleVariance, float yAngleVariance, float xWidth, float yWidth);
    
    UFUNCTION(BlueprintPure)
    static FVector CalculateDirectionVarianceRadialUsingVectors(FVector Origin, FVector targetPosition, FVector UpVector, float angleVariance, float Radius);
    
    UFUNCTION(BlueprintPure)
    static FVector CalculateDirectionVarianceRadialUsingActors(AActor* Origin, AActor* Target, float angleVariance, float Radius, FVector UpVector);
    
    UFUNCTION(BlueprintCallable)
    static void BP_UpdateOverlaps(UObject* WorldContextObject, AActor* callingActor, UShapeComponent* overlappingComponent, const TEnumAsByte<ECollisionChannel> overlapCollisionChannel, UPARAM(Ref) TArray<AActor*>& storedOverlappingActors, TArray<AActor*>& outStoredOverlappingActors, UPARAM(Ref) TArray<AActor*>& BeginOverlapActors, TArray<AActor*>& outBeginOverlapactors, UPARAM(Ref) TArray<AActor*>& EndOverlapActors, TArray<AActor*>& outEndOverlapActors, TArray<AActor*> IgnoreActors);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& Origin, float OuterRadius, AController* eventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, float impulseForceFalloff, FVector HitDirectionOverride, FVector hitDirectionOriginOffset, float MinimumDamage, float InnerRadius, float DamageFalloff, TEnumAsByte<ECollisionChannel> damagePreventionChannel, bool ignoreTeams, bool dotDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyPointDamage(AActor* DamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& hitFromDirection, const FHitResult& HitInfo, AController* eventInstigator, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, bool ignoreTeams, bool dotDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyDamage(AActor* DamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, AController* eventInstigator, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, bool IgnoreShielding, bool ignoreTeams, bool dotDamage);
    
};

