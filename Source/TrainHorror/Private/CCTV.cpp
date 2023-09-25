// Fill out your copyright notice in the Description page of Project Settings.


#include "CCTV.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraActor.h"
#include "Engine/SceneCapture2D.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ACCTV::ACCTV()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACCTV::BeginPlay()
{
	Super::BeginPlay();

	
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (Actor->IsA(ACameraActor::StaticClass()) && Actor->GetActorLabel() == TEXT("CCTV1"))
			cctv1 = Cast<ACameraActor>(Actor);
		
		if (Actor->IsA(ACameraActor::StaticClass()) && Actor->GetActorLabel() == TEXT("CCTV2"))
			cctv2 = Cast<ACameraActor>(Actor);

		if (Actor->IsA(ACameraActor::StaticClass()) && Actor->GetActorLabel() == TEXT("CCTV3"))
			cctv3 = Cast<ACameraActor>(Actor);

		if (Actor->IsA(ACameraActor::StaticClass()) && Actor->GetActorLabel() == TEXT("CCTV4"))
			cctv4 = Cast<ACameraActor>(Actor);

		if (Actor->IsA(ACameraActor::StaticClass()) && Actor->GetActorLabel() == TEXT("CCTV5"))
			cctv5 = Cast<ACameraActor>(Actor);

		if (Actor->IsA(ACameraActor::StaticClass()) && Actor->GetActorLabel() == TEXT("CCTV6"))
			cctv6 = Cast<ACameraActor>(Actor);
			
		if (Actor->GetActorLabel() == TEXT("SceneCapture2D"))
			sceneCapture2D = Cast<ASceneCapture2D>(Actor);
	}
	
}

void ACCTV::SetSceneScapture2DPos(int index)
{
	FVector locationVec;
	FRotator rotationVec;
	switch (index)
	{
		case 1:
			locationVec = cctv1->GetActorLocation();
			rotationVec = cctv1->GetActorRotation();
		break;
		case 2:
			locationVec = cctv2->GetActorLocation();
			rotationVec = cctv2->GetActorRotation();
		break;
		case 3:
			locationVec = cctv3->GetActorLocation();
			rotationVec = cctv3->GetActorRotation();
		break;
		case 4:
			locationVec = cctv4->GetActorLocation();
			rotationVec = cctv4->GetActorRotation();
		break;
		case 5:
			locationVec = cctv5->GetActorLocation();
			rotationVec = cctv5->GetActorRotation();
		break;
		case 6:
			locationVec = cctv6->GetActorLocation();
			rotationVec = cctv6->GetActorRotation();
		break;
		default:
		break;
	}
	sceneCapture2D->SetActorRelativeLocation(locationVec);
	sceneCapture2D->SetActorRelativeRotation(rotationVec);
}

// Called every frame
void ACCTV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACCTV::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

