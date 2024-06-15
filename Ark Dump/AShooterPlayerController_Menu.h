#pragma once

#include "BaseDeclarations.h"
#include "APlayerController.h"
#include "AController.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AShooterPlayerController_Menu : APlayerController
{

	// Functions

	void PostInitializeComponents() { NativeCall<void>(this, "AShooterPlayerController_Menu.PostInitializeComponents"); }
};

