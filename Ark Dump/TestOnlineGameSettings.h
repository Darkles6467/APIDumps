#pragma once

#include "BaseDeclarations.h"
#include "FOnlineSessionSettings.h"

struct TestOnlineGameSettings : FOnlineSessionSettings
{

	// Functions

	void AddWorldSettings(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "TestOnlineGameSettings.AddWorldSettings", InWorld); }
};

