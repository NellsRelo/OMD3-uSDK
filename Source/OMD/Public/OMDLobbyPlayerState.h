#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "OMDSoftProtoPtr.h"
#include "OMDLobbyPlayerState.generated.h"

UCLASS()
class OMD_API AOMDLobbyPlayerState : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated)
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Character)
    FOMDSoftProtoPtr Character;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Skin)
    FOMDSoftProtoPtr Skin;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsReady)
    uint8 bIsReady: 1;
    
public:
    AOMDLobbyPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_Skin();
    
    UFUNCTION()
    void OnRep_IsReady();
    
    UFUNCTION()
    void OnRep_Character();
    
};

