using UnrealBuildTool;

public class OMDEditorTarget : TargetRules {
	public OMDEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"OMD",
		});
	}
}
