using UnrealBuildTool;

public class VCA_FYPServerTarget : TargetRules
{
	public VCA_FYPServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("VCA_FYP");
	}
}
