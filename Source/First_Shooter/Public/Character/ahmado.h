// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ahmado.generated.h"


UCLASS()
class FIRST_SHOOTER_API Aahmado : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Aahmado();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:  
	UPROPERTY(EditAnyWhere)
	class USpringArmComponent* springarm;

	UPROPERTY(EditAnyWhere)
	class UCameraComponent* camera;
};
