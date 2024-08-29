#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OMDSoftProtoPtr.h"
#include "OMDLobbyPlayerState.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDLobbyPlayerState : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Character, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Skin, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr Skin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsReady, meta=(AllowPrivateAccess=true))
    uint8 bIsReady: 1;
    
public:
    AOMDLobbyPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Skin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsReady();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Character();
    
};

