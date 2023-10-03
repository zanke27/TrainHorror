// Fill out your copyright notice in the Description page of Project Settings.


#include "AreaManager.h"
#include "Area.h"

// Sets default values
AAreaManager::AAreaManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool AAreaManager::Report(int areaIndex, int reportIndex)
{
	AArea* area = nullptr;
	switch (areaIndex)
	{
	case 1:
		area = area_1;
		break;
	case 2:
		area = area_2;
		break;
	case 3:
		area = area_3;
		break;
	case 4:
		area = area_4;
		break;
	default:
		break;
	}

	bool result = area->ReportArea(reportIndex);
	if (result == false)
	{
		curHP--;
		if (curHP <= 0) 
		{
			Die();
		}
	}
	return result;
}

// Called when the game starts or when spawned
void AAreaManager::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAreaManager::Die()
{

}

// Called every frame
void AAreaManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	time += DeltaTime;

	if (time >= 6) 
	{
		time = 0;
		int rand = FMath::Rand() % 4;
		rand += 1;
		UE_LOG(LogTemp, Log, TEXT("???"));

		switch (rand)
		{
		case 1:
			area_1->Enable();
			break;
		case 2:
			area_2->Enable();
			break;
		case 3:
			area_3->Enable();
			break;
		case 4:
			area_4->Enable();
			break;
		default:
			break;
		}
	}
}

