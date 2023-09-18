// Fill out your copyright notice in the Description page of Project Settings.


#include "Area.h"

// Sets default values
AArea::AArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArea::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArea::Enable(int index)
{
	if (isMonsterActiving)
		return;

	if (index >= monsterCount) {
		index = monsterCount;
	}

	monster_1->SetActorHiddenInGame(false);
	monster_2->SetActorHiddenInGame(false);
	monster_3->SetActorHiddenInGame(false);
	monster_4->SetActorHiddenInGame(false);

	switch (index)
	{
	case 1:
		monster_1->SetActorHiddenInGame(true);
		break;
	case 2:
		monster_2->SetActorHiddenInGame(true);
		break;
	case 3:
		monster_3->SetActorHiddenInGame(true);
		break;
	case 4:
		monster_4->SetActorHiddenInGame(true);
		break;
	default:
		break;
	}

	curActiveMonsterIndex = index;
	isMonsterActiving = true;
}

void AArea::ReportArea(int reportIndex)
{
	if (curActiveMonsterIndex != reportIndex)
		return;

	monster_1->SetActorHiddenInGame(false);
	monster_2->SetActorHiddenInGame(false);
	monster_3->SetActorHiddenInGame(false);
	monster_4->SetActorHiddenInGame(false);

	isMonsterActiving = false;
}

FString AArea::GetText(int index)
{
	switch (index)
	{
	case 1:
		return caseText_1;
		break;
	case 2:
		return caseText_2;
		break;
	case 3:
		return caseText_3;
		break;
	case 4:
		return caseText_4;
		break;
	default:
		return FString();
		break;
	}
}

