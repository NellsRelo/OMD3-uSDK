#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "OMDGameSingleton.generated.h"

class UOMDProtoManager;
class UOMDMapManager;
class UOMDOnlineManager;
class UOMDWidgetManager;
class UOMDStreamConnectManager;
class UOMDDifficultyManager;

UCLASS(Abstract)
class OMD_API UOMDGameSingleton : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    FSoftClassPath ProtoManagerClassPath;
    
    UPROPERTY(EditAnywhere, NoClear)
    FSoftClassPath MapManagerClassPath;
    
    UPROPERTY(EditAnywhere, NoClear)
    FSoftClassPath OnlineManagerClassPath;
    
    UPROPERTY(EditAnywhere, NoClear)
    FSoftClassPath WidgetManagerClassPath;
    
    UPROPERTY(EditAnywhere, NoClear)
    FSoftClassPath DifficultyManagerClassPath;
    
    UPROPERTY(EditAnywhere, NoClear)
    FSoftClassPath StreamConnectManagerClassPath;
    
    UPROPERTY()
    UOMDProtoManager* ProtoManager;
    
    UPROPERTY()
    UOMDMapManager* MapManager;
    
    UPROPERTY()
    UOMDOnlineManager* OnlineManager;
    
    UPROPERTY()
    UOMDWidgetManager* WidgetManager;
    
    UPROPERTY()
    UOMDDifficultyManager* DifficultyManager;
    
    UPROPERTY()
    UOMDStreamConnectManager* StreamConnectManager;
    
public:
    UOMDGameSingleton();
};

