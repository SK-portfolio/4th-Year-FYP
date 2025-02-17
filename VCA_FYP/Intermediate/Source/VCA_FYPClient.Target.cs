using UnrealBuildTool;

public class VCA_FYPClientTarget : TargetRules
{
	public VCA_FYPClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("VCA_FYP");
	}
}
