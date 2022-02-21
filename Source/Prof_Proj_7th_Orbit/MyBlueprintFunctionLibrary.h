// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PROF_PROJ_7TH_ORBIT_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Turn")
		static FVector LerpAxisScript(FVector currentPos, FVector desiredPos, FVector axis, float alpha);

	static float lerp(float a, float b, float t);
	static FVector lerp(FVector a, FVector b, FVector t);
	
};
