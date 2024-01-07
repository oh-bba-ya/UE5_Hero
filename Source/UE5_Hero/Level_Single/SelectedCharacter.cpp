// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectedCharacter.h"

// Sets default values
ASelectedCharacter::ASelectedCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASelectedCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASelectedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASelectedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

