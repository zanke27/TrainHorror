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
	if (monster_1)
	{
		monster_1->SetActorHiddenInGame(true);
	}
	if (monster_2)
	{
		monster_2->SetActorHiddenInGame(true);
	}
	if (monster_3)
	{
		monster_3->SetActorHiddenInGame(true);
	}
	if (monster_4)
	{
		monster_4->SetActorHiddenInGame(true);
	}
}

// Called every frame
void AArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AArea::Enable()
{
	if (isMonsterActiving)
		return;

	int index = (FMath::Rand() % monsterCount) + 1;

	if (monster_1)
		monster_1->SetActorHiddenInGame(true);
	if (monster_2)
		monster_2->SetActorHiddenInGame(true);
	if (monster_3)
		monster_3->SetActorHiddenInGame(true);
	if (monster_4)
		monster_4->SetActorHiddenInGame(true);

	switch (index)
	{
	case 1:
		if (monster_1)
			monster_1->SetActorHiddenInGame(false);
		break;
	case 2:
		if (monster_2)
			monster_2->SetActorHiddenInGame(false);
		break;
	case 3:
		if (monster_3)
			monster_3->SetActorHiddenInGame(false);
		break;
	case 4:
		if (monster_4)
			monster_4->SetActorHiddenInGame(false);
		break;
	default:
		break;
	}

	curActiveMonsterIndex = index;
	isMonsterActiving = true;
}

bool AArea::ReportArea(int reportIndex)
{
	if (curActiveMonsterIndex != reportIndex)
	{
		return false;
	}

	if (monster_1)
		monster_1->SetActorHiddenInGame(true);
	if (monster_2)
		monster_2->SetActorHiddenInGame(true);
	if (monster_3)
		monster_3->SetActorHiddenInGame(true);
	if (monster_4)
		monster_4->SetActorHiddenInGame(true);

	isMonsterActiving = false;
	return true;
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

