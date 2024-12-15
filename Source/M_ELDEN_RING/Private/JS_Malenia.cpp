// Fill out your copyright notice in the Description page of Project Settings.


#include "JS_Malenia.h"

#include "Components/CapsuleComponent.h"

// Sets default values
AJS_Malenia::AJS_Malenia()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJS_Malenia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJS_Malenia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AJS_Malenia::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

