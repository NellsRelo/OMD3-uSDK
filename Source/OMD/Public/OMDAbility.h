#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOMDAbilityNotifyType.h"
#include "OMDSoftProtoPtr.h"
#include "Templates/SubclassOf.h"
#include "OMDAbility.generated.h"

class AActor;
class AController;
class UOMDAbilityAttributes;
class UOMDAbilityParameters;
class UOMDAction;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDAbility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOMDAction*> ActiveActions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboNumber;
    
public:
    UOMDAbility();

    UFUNCTION(BlueprintCallable)
    void ManualResetInitialDamageHit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetProtodata() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetOwningController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDAbilityAttributes* GetAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllActorsOfClass(TSubclassOf<AActor> actorClass, TArray<AActor*>& Actors) const;
    
    UFUNCTION(BlueprintCallable)
    void EndAbility();
    
    UFUNCTION(BlueprintCallable)
    void CommitAbility();
    
    UFUNCTION(BlueprintCallable)
    void CancelAbility();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitAbility(UOMDAbilityParameters* Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EndAnimNotify(EOMDAbilityNotifyType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Disabled(bool Disabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Deactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Cleanup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Canceled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CanActivateAbility(UOMDAbilityParameters* Params) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BeginAnimNotify(EOMDAbilityNotifyType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BeganReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Activated(UOMDAbilityParameters* Params);
    
};

