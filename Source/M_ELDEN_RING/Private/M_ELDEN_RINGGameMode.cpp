// Copyright Epic Games, Inc. All Rights Reserved.

#include "M_ELDEN_RINGGameMode.h"
#include "M_ELDEN_RINGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AM_ELDEN_RINGGameMode::AM_ELDEN_RINGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
