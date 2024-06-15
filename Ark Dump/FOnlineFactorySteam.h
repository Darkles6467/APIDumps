#pragma once

#include "BaseDeclarations.h"
#include "IOnlineFactory.h"

struct FOnlineFactorySteam : IOnlineFactory
{

	// Functions

	void DestroySubsystem() { NativeCall<void>(this, "FOnlineFactorySteam.DestroySubsystem"); }
};

