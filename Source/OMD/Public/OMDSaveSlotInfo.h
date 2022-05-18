#pragma once
#include "CoreMinimal.h"
#include "OMDSaveSlotInfo.generated.h"

USTRUCT()
struct FOMDSaveSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString Name;
    
    UPROPERTY(Config)
    bool bHasTitle;
    
    UPROPERTY(Config)
    FString Title;
    
    UPROPERTY(Config)
    bool bHasSubtitle;
    
    UPROPERTY(Config)
    FString Subtitle;
    
    UPROPERTY(Config)
    bool bHasDescription;
    
    UPROPERTY(Config)
    FString Description;
    
    UPROPERTY(Config)
    bool bHasIcon;
    
    UPROPERTY(Config)
    FString Icon;
    
    UPROPERTY(Config)
    bool bHasSize;
    
    UPROPERTY(Config)
    int32 Size;
    
    OMD_API FOMDSaveSlotInfo();
};

