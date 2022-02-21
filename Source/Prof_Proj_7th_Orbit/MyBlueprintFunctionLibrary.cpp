// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FVector UMyBlueprintFunctionLibrary::LerpAxisScript(FVector currentPos, FVector desiredPos, FVector axis, float alpha)
{
	return lerp(currentPos, desiredPos, axis * alpha);
}

float UMyBlueprintFunctionLibrary::lerp(float a, float b, float t)
{
	return (a + t * (b - a));
}

FVector UMyBlueprintFunctionLibrary::lerp(FVector a, FVector b, FVector t)
{
	return FVector{ lerp(a.X, b.X, t.X), lerp(a.Y, b.Y, t.Y), lerp(a.Z, b.Z, t.Z) };
}

