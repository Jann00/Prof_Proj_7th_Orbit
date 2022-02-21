// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Prof_Proj_7th_OrbitTarget : TargetRules
{
	public Prof_Proj_7th_OrbitTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Prof_Proj_7th_Orbit" } );
	}
}
