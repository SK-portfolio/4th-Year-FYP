// Copyright 2024 Ziya Bahceci. All Rights Reserved.

using UnrealBuildTool;

public class VaRestEditor : ModuleRules
{
	public VaRestEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        DefaultBuildSettings = BuildSettingsVersion.V5;
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"VaRestEditor/Private",
				
				// ... add other private include paths required here ...
			});
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "VaRest"

				// ... add other public dependencies that you statically link with here ...
			});
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "InputCore",
                "AssetTools",
                "UnrealEd",     // for FAssetEditorManager
                "KismetWidgets",
                "KismetCompiler",
                "BlueprintGraph",
                "GraphEditor",
                "Kismet",       // for FWorkflowCentricApplication
                "PropertyEditor",
                "EditorStyle",
                "Sequencer",
                "DetailCustomizations",
                "Settings",
                "RenderCore"
			});
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			});
	}
}
