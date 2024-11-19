// Copyright Epic Games, Inc. All Rights Reserved.

#include "homework001GameMode.h"
#include "homework001Character.h"
#include "UObject/ConstructorHelpers.h"

Ahomework001GameMode::Ahomework001GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
