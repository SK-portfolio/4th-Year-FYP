using UnrealBuildTool;

public class VCA_FYPEditorTarget : TargetRules
{
	public VCA_FYPEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("VCA_FYP");
	}
}
