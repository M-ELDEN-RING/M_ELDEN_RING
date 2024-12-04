// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class M_ELDEN_RING : ModuleRules
{
	public M_ELDEN_RING(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
