#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EAggroGroup.h"
#include "OMDSoftProtoPtr.h"
#include "OMDGameMode.generated.h"

class AController;
class AOMDTrap;
class UBehaviorTree;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AOMDGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalMeleeAggroCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LargeMeleeAggroCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RangedlMeleeAggroCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RunnersAggroCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecialAggroCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealerAggroCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlyerAggroCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalAggroCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> AIMasterBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr AIInvulnerabilityAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugNoWisps;
    
public:
    AOMDGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveDestructibleTrap(AOMDTrap* deadTrap);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDestructibleTrap(AOMDTrap* newTrap);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAggroCap(EAggroGroup AggroGroup);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClientLeftGame(AController* Controller);
    
};

