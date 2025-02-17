using UnrealBuildTool;

public class VCA_FYPTarget : TargetRules
{
	public VCA_FYPTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("VCA_FYP");
	}
}
