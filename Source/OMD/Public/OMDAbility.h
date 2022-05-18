#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOMDAbilityNotifyType.h"
#include "OMDAbility.generated.h"

class AController;
class UOMDAction;
class UOMDAbilityParameters;
class AActor;
class UOMDAbilityAttributes;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDAbility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UOMDAction*> ActiveActions;
    
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 ComboNumber;
    
public:
    UOMDAbility();
    UFUNCTION(BlueprintCallable)
    void ManualResetInitialDamageHit();
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetSource() const;
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetProtodata() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetOwningController() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    UOMDAbilityAttributes* GetAttributes() const;
    
    UFUNCTION(BlueprintPure)
    void GetAllActorsOfClass(TSubclassOf<AActor> actorClass, TArray<AActor*>& Actors) const;
    
    UFUNCTION(BlueprintCallable)
    void EndAbility();
    
    UFUNCTION(BlueprintCallable)
    void CommitAbility();
    
    UFUNCTION(BlueprintCallable)
    void CancelAbility();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_InitAbility(UOMDAbilityParameters* Params);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EndAnimNotify(EOMDAbilityNotifyType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Disabled(bool Disabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Deactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Cleanup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Canceled();
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_CanActivateAbility(UOMDAbilityParameters* Params) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BeginAnimNotify(EOMDAbilityNotifyType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BeganReload();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Activated(UOMDAbilityParameters* Params);
    
};

