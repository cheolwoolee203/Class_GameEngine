// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AnimKwang : ModuleRules
{
	public AnimKwang(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
