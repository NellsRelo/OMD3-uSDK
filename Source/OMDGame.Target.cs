﻿using UnrealBuildTool;

public class OMDGameTarget : TargetRules {
	public OMDGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"OMD",
		});
	}
}
