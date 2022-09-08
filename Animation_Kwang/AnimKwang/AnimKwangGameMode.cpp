// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimKwangGameMode.h"
#include "AnimKwangCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimKwangGameMode::AAnimKwangGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
