// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CCTV.generated.h"

UCLASS()
class ACCTV : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACCTV();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(BlueprintReadWrite, Category = CCTV)
	class ACameraActor* cctv1 = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = CCTV)
	class ACameraActor* cctv2 = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = CCTV)
	class ACameraActor* cctv3 = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = CCTV)
	class ACameraActor* cctv4 = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = CCTV)
	class ACameraActor* cctv5 = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = CCTV)
	class ACameraActor* cctv6 = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = CCTV)
	class ASceneCapture2D* sceneCapture2D = nullptr;

public:
	UFUNCTION(BlueprintCallable, Category = CCTV)
	void SetSceneScapture2DPos(int index);
};
