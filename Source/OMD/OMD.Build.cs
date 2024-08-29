using UnrealBuildTool;

public class OMD : ModuleRules {
    public OMD(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimationBudgetAllocator",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayCameras",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "NavPower",
            "OnlineSubsystemUtils",
            "SlateCore",
            "UMG",
            "GameplayTasks"
        });
    }
}
