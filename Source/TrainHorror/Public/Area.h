// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Area.generated.h"

UCLASS()
class TRAINHORROR_API AArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArea();

	UPROPERTY(EditAnywhere)
	class AActor* monster_1;
	UPROPERTY(EditAnywhere)
	class AActor* monster_2;
	UPROPERTY(EditAnywhere)
	int monsterCount;
	UPROPERTY(EditAnywhere)
	int curActiveMonsterIndex;
	UPROPERTY(EditAnywhere)
	bool isMonsterActiving;
	UPROPERTY(EditAnywhere)
	FString caseText_1;
	UPROPERTY(EditAnywhere)
	FString caseText_2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Enable();
	bool ReportArea(int reportIndex);
	FString GetText(int index);
};
