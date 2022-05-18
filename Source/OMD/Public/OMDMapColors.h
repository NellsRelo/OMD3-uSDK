#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "OMDMapColors.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMapColors {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FColor Player;
    
    UPROPERTY(Config)
    FColor Teammate;
    
    UPROPERTY(Config)
    FColor Death;
    
    UPROPERTY(Config)
    FColor Enemy;
    
    UPROPERTY(Config)
    FColor Destroyer;
    
    UPROPERTY(Config)
    FColor Wisp;
    
    UPROPERTY(Config)
    FColor Trap;
    
    UPROPERTY(Config)
    FColor Rift;
    
    UPROPERTY(Config)
    FColor Portal;
    
    UPROPERTY(Config)
    FColor Pickup;
    
    UPROPERTY(Config)
    FColor Incoming;
    
    UPROPERTY(Config)
    FColor Attacking;
    
    UPROPERTY(Config)
    FColor Inactive;
    
    UPROPERTY(Config)
    FColor Totem;
    
    FOMDMapColors();
};

