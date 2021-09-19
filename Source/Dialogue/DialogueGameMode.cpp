// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogueGameMode.h"
#include "DialogueCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADialogueGameMode::ADialogueGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
