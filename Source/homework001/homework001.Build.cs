// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class homework001 : ModuleRules
{
	public homework001(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
