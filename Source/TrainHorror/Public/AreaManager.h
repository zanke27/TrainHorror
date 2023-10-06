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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UUserWidget* reportWBP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AArea* area_1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AArea* area_2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AArea* area_3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AArea* area_4;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AArea* area_5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AArea* area_6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int curHP;

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AreaManager")
	//int32 ADD(int32 a, int32 b)
	//{
	//	return a + b;
	//}
	UFUNCTION(BlueprintCallable, Category = "AreaManager")
	bool Report(int areaIndex, int reportIndex);
	UFUNCTION(BlueprintCallable, Category = "AreaManager")
	FString GetText(int index);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Die();

private:
	float time;
	int _curAreaIndex;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
