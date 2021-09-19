// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Dialogue : ModuleRules
{
	public Dialogue(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
