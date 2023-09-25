// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AreaManager.generated.h"

UCLASS()
class TRAINHORROR_API AAreaManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAreaManager();

public:
	UPROPERTY(EditAnywhere)
	class AArea* area_1;
	UPROPERTY(EditAnywhere)
	class AArea* area_2;
	UPROPERTY(EditAnywhere)
	class AArea* area_3;
	UPROPERTY(EditAnywhere)
	class AArea* area_4;
	UPROPERTY(EditAnywhere)
	class AArea* area_5;
	UPROPERTY(EditAnywhere)
	class AArea* area_6;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	float time;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
