// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ahmado.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
Aahmado::Aahmado()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	springarm = CreateDefaultSubobject<USpringArmComponent>(FName("springarm"));
	springarm->SetupAttachment(RootComponent);
	camera = CreateAbstractDefaultSubobject<UCameraComponent>(FName("camera"));
	camera->SetupAttachment(springarm);

}

// Called when the game starts or when spawned
void Aahmado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aahmado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Aahmado::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

