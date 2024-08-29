#include "OMDGameplayStatics.h"
#include "Templates/SubclassOf.h"

UOMDGameplayStatics::UOMDGameplayStatics() {
}

FDateTime UOMDGameplayStatics::ToLocalTime(FDateTime date) {
    return FDateTime{};
}

bool UOMDGameplayStatics::ShowMultiplayerRestrictionOverlay(APlayerController* Player) {
    return false;
}

UOMDAsyncModal* UOMDGameplayStatics::ShowAsyncModal(APlayerController* Controller, EAsyncDialogueReason reason) {
    return NULL;
}

void UOMDGameplayStatics::SetSavedCultureCode(const FString& cultureCode) {
}

TSoftClassPtr<UOMDReticleWidget> UOMDGameplayStatics::MakeReticleSoftClassPtrFromString(const FString& String) {
    return NULL;
}

TSoftClassPtr<AOMDPlayerAttachment> UOMDGameplayStatics::MakePlayerAttchmentSoftClassPtrFromString(const FString& String) {
    return NULL;
}

TSoftClassPtr<AActor> UOMDGameplayStatics::MakeActorSoftClassPtrFromString(const FString& String) {
    return NULL;
}

bool UOMDGameplayStatics::IsXboxPlatform() {
    return false;
}

bool UOMDGameplayStatics::IsWithEditor() {
    return false;
}

bool UOMDGameplayStatics::IsWinGDKPlatform() {
    return false;
}

bool UOMDGameplayStatics::IsStreamConnectSubscriptionSupported(const UObject* WorldContextObject, APlayerController* PlayerController) {
    return false;
}

bool UOMDGameplayStatics::IsStreamConnectStreamingSupported(const UObject* WorldContextObject, APlayerController* PlayerController) {
    return false;
}

bool UOMDGameplayStatics::IsStadiaPlatform() {
    return false;
}

bool UOMDGameplayStatics::IsSoftProtoPtrValid(FOMDSoftProtoPtr protoPointer) {
    return false;
}

bool UOMDGameplayStatics::IsPS5Platform() {
    return false;
}

bool UOMDGameplayStatics::IsPlayStationPlatform() {
    return false;
}

bool UOMDGameplayStatics::IsMultiplayerRestricted(APlayerController* Player) {
    return false;
}

bool UOMDGameplayStatics::IsLowEndPlatform() {
    return false;
}

bool UOMDGameplayStatics::IsGamepadBackKey(FKey Key) {
    return false;
}

bool UOMDGameplayStatics::IsGamepadAcceptKey(FKey Key) {
    return false;
}

bool UOMDGameplayStatics::IsEOSPlatform() {
    return false;
}

bool UOMDGameplayStatics::IsDesktopPlatform() {
    return false;
}

bool UOMDGameplayStatics::IsDebugBuild() {
    return false;
}

bool UOMDGameplayStatics::IsAchievementComplete(FOMDSoftProtoPtr OMDAchievementProto) {
    return false;
}

AOMDWorldSettings* UOMDGameplayStatics::GetWorldSettings(const UObject* WorldContextObject, bool bCheckStreamingPersistent) {
    return NULL;
}

FOMDStatusEffectProto UOMDGameplayStatics::GetStatusEffectProto(FOMDSoftProtoPtr protodata) {
    return FOMDStatusEffectProto{};
}

FString UOMDGameplayStatics::GetSavedCultureCode() {
    return TEXT("");
}

FString UOMDGameplayStatics::GetProjectVersion() {
    return TEXT("");
}

FString UOMDGameplayStatics::GetPlayerNickname(APlayerController* Player) {
    return TEXT("");
}

AOMDInventory* UOMDGameplayStatics::GetPlayerInventory(const UObject* WorldContextObject, FUniqueNetIdRepl PlayerId) {
    return NULL;
}

FOMDNewsProto UOMDGameplayStatics::GetNewsProto(FOMDSoftProtoPtr protodata) {
    return FOMDNewsProto{};
}

FName UOMDGameplayStatics::GetMontageSectionName(UAnimMontage* Montage, int32 Index) {
    return NAME_None;
}

int32 UOMDGameplayStatics::GetMontageSectionCount(UAnimMontage* Montage) {
    return 0;
}

void UOMDGameplayStatics::GetCultureDiplayNames(TArray<FString>& Cultures) {
}

FString UOMDGameplayStatics::GetCultureDiplayName(const FString& cultureCode) {
    return TEXT("");
}

void UOMDGameplayStatics::GetCultureCodes(TArray<FString>& Cultures) {
}

FString UOMDGameplayStatics::GetCultureCodeFromDisplayName(const FString& DisplayName) {
    return TEXT("");
}

void UOMDGameplayStatics::GetCompletedAchievements(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDGameplayStatics::GetAllStoryMissions(const UObject* WorldContextObject, TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDGameplayStatics::GetAllPlayerCharacters(const UObject* WorldContextObject, TArray<AOMDPlayerCharacter*>& characters) {
}

void UOMDGameplayStatics::GetActorListFromComponentList(const TArray<UPrimitiveComponent*>& ComponentList, UClass* ActorClassFilter, TArray<AActor*>& OutActorList) {
}

FText UOMDGameplayStatics::FormatTimespan(FTimespan Timespan) {
    return FText::GetEmpty();
}

FText UOMDGameplayStatics::FormatTime(FDateTime date) {
    return FText::GetEmpty();
}

FText UOMDGameplayStatics::FormatDateTime(FDateTime date) {
    return FText::GetEmpty();
}

FText UOMDGameplayStatics::FormatDate(FDateTime date) {
    return FText::GetEmpty();
}

void UOMDGameplayStatics::DisplayOMDLog(const FString& logMessage) {
}

void UOMDGameplayStatics::DelayForFrames(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 Frames) {
}

bool UOMDGameplayStatics::CapsuleOverlapComponents(UObject* WorldContextObject, const FVector CapsulePos, FRotator CapsuleRot, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UOMDGameplayStatics::CapsuleOverlapActors(UObject* WorldContextObject, const FVector CapsulePos, const FRotator CapsuleRot, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}

float UOMDGameplayStatics::CalculateVelocityVarianceRectangularUsingVectors(FVector Origin, FVector targetPosition, FVector forwardVector, FVector rightVector, float baseVelocity, float xVelocityVariance, float yVelocityVariance, float xWidth, float yWidth, bool exponentialFalloff) {
    return 0.0f;
}

float UOMDGameplayStatics::CalculateVelocityVarianceRectangularUsingActors(AActor* Origin, AActor* Target, float baseVelocity, float xVelocityVariance, float yVelocityVariance, float xWidth, float yWidth, bool exponentialFalloff) {
    return 0.0f;
}

float UOMDGameplayStatics::CalculateVelocityVarianceRadialUsingVectors(FVector Origin, FVector targetPosition, float baseVelocity, float velocityVariance, float Radius, bool exponentialFalloff) {
    return 0.0f;
}

float UOMDGameplayStatics::CalculateVelocityVarianceRadialUsingActors(AActor* Origin, AActor* Target, float baseVelocity, float velocityVariance, float Radius, bool exponentialFalloff) {
    return 0.0f;
}

float UOMDGameplayStatics::CalculateVelocityBasedOnCharacterMass(float baseVelocity, AOMDCharacter* Character) {
    return 0.0f;
}

FVector UOMDGameplayStatics::CalculateDirectionVarianceRectangularUsingVectors(FVector Origin, FVector targetPosition, FVector forwardVector, FVector rightVector, FVector baseDirection, float xAngleVariance, float yAngleVariance, float xWidth, float yWidth) {
    return FVector{};
}

FVector UOMDGameplayStatics::CalculateDirectionVarianceRectangularUsingActors(AActor* Origin, AActor* Target, FVector baseDirection, float xAngleVariance, float yAngleVariance, float xWidth, float yWidth) {
    return FVector{};
}

FVector UOMDGameplayStatics::CalculateDirectionVarianceRadialUsingVectors(FVector Origin, FVector targetPosition, FVector UpVector, float angleVariance, float Radius) {
    return FVector{};
}

FVector UOMDGameplayStatics::CalculateDirectionVarianceRadialUsingActors(AActor* Origin, AActor* Target, float angleVariance, float Radius, FVector UpVector) {
    return FVector{};
}

void UOMDGameplayStatics::BP_UpdateOverlaps(UObject* WorldContextObject, AActor* callingActor, UShapeComponent* overlappingComponent, const TEnumAsByte<ECollisionChannel> overlapCollisionChannel, TArray<AActor*>& storedOverlappingActors, TArray<AActor*>& outStoredOverlappingActors, TArray<AActor*>& BeginOverlapActors, TArray<AActor*>& outBeginOverlapactors, TArray<AActor*>& EndOverlapActors, TArray<AActor*>& outEndOverlapActors, TArray<AActor*> IgnoreActors) {
}

void UOMDGameplayStatics::AutoLogin(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 localUserNum, bool& bOutSuccess) {
}

bool UOMDGameplayStatics::ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& Origin, float OuterRadius, AController* eventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, float impulseForceFalloff, FVector HitDirectionOverride, FVector hitDirectionOriginOffset, float MinimumDamage, float InnerRadius, float DamageFalloff, TEnumAsByte<ECollisionChannel> damagePreventionChannel, bool ignoreTeams, bool dotDamage) {
    return false;
}

bool UOMDGameplayStatics::ApplyPointDamage(AActor* DamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& hitFromDirection, const FHitResult& HitInfo, AController* eventInstigator, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, bool ignoreTeams, bool dotDamage) {
    return false;
}

bool UOMDGameplayStatics::ApplyDamage(AActor* DamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, AController* eventInstigator, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, bool IgnoreShielding, bool ignoreTeams, bool dotDamage) {
    return false;
}


