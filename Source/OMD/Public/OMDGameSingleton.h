#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OMDGameSingleton.generated.h"

class UOMDDifficultyManager;
class UOMDMapManager;
class UOMDOnlineManager;
class UOMDProtoManager;
class UOMDStreamConnectManager;
class UOMDWidgetManager;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDGameSingleton : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath ProtoManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath MapManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath OnlineManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath WidgetManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath DifficultyManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath StreamConnectManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDProtoManager* ProtoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDMapManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDOnlineManager* OnlineManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDWidgetManager* WidgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDDifficultyManager* DifficultyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDStreamConnectManager* StreamConnectManager;
    
public:
    UOMDGameSingleton();

};

