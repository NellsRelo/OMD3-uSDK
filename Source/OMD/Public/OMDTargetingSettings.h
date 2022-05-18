#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectCategory.h"
#include "GenericTeamAgentInterface.h"
#include "ETargetingPrioritization.h"
#include "ECurrentBlockingTargetingType.h"
#include "OMDTargetingSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD_API FOMDTargetingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bUseIgnoreList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<AActor>> IgnoreList;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseNoticeList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<AActor>> NoticeList;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseVisualCategoriesIgnoreList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EStatusEffectCategory> VisualCategoryIgnoreList;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseVisualCategoriesNoticeList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EStatusEffectCategory> VisualCategoryNoticeList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIgnoreDisabledTraps: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<ETeamAttitude::Type>> AttitudesToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    ETargetingPrioritization Prioritization;
    
    UPROPERTY(EditDefaultsOnly)
    ECurrentBlockingTargetingType CurrentNodeBlockingType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanTargetUndamageables;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanTargetDead;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShouldOnlyTargetDead;
    
    FOMDTargetingSettings();
};

