// Copyright Epic Games, Inc. All Rights Reserved.

#include "SAEJamGameMode.h"
#include "SAEJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASAEJamGameMode::ASAEJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
