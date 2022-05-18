#pragma once
#include "CoreMinimal.h"
#include "EAggroGroup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "OMDSoftProtoPtr.h"
#include "GameFramework/GameModeBase.h"
#include "OMDGameMode.generated.h"

class UBehaviorTree;
class AController;
class AOMDTrap;

UCLASS(MinimalAPI, NonTransient)
class AOMDGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NormalMeleeAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LargeMeleeAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RangedlMeleeAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RunnersAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SpecialAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HealerAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FlyerAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GlobalAggroCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBehaviorTree> AIMasterBehavior;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr AIInvulnerabilityAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugNoWisps;
    
public:
    AOMDGameMode();
    UFUNCTION(BlueprintCallable)
    void RemoveDestructibleTrap(AOMDTrap* deadTrap);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDestructibleTrap(AOMDTrap* newTrap);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAggroCap(EAggroGroup AggroGroup);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ClientLeftGame(AController* Controller);
    
};

