#pragma once

#include "BaseDeclarations.h"
#include "AGameMode.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ALocalSpawnGameMode : AGameMode
{

	// Functions

	void HandleMatchHasStarted() { NativeCall<void>(this, "ALocalSpawnGameMode.HandleMatchHasStarted"); }
};

