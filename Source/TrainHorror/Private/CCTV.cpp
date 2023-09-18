// Fill out your copyright notice in the Description page of Project Settings.


#include "CCTV.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraActor.h"
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

	UKismetSystemLibrary::PrintString(GetWorld(), TEXT("Find Start"), true, true, FLinearColor::Green, 2.0f);

	for (AActor* Actor : FoundActors)
	{
		if (Actor->IsA(ACameraActor::StaticClass()) && Actor->GetActorLabel() == TEXT("CCTV1"))
		{
			cctv1 = Cast<ACameraActor>(Actor);
			UKismetSystemLibrary::PrintString(GetWorld(), TEXT("Find CCTV1"), true, true, FLinearColor::Green, 2.0f);
		}
		
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
	}
	
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

