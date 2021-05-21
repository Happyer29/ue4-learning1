// Copyright Epic Games, Inc. All Rights Reserved.

#include "learning1GameMode.h"
#include "learning1HUD.h"
#include "learning1Character.h"
#include "UObject/ConstructorHelpers.h"

Alearning1GameMode::Alearning1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Alearning1HUD::StaticClass();
}
