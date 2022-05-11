// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaserExpandCPP.generated.h"

UCLASS(ClassGroup = (Custom),meta = (BlueprintSpawnableComponent), Blueprintable)
class PROF_PROJ_7TH_ORBIT_API ALaserExpandCPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaserExpandCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// member variables, FLOAT
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_lifeTime = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ChargeStateTime = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_DamageStateTime = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_ExpandSpeed = 0;

	// member variables, BOOL
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_Charging = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_Reflected = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_playerOwned = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_Disappearing = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector m_direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor * m_target;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor * m_parentActor;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
