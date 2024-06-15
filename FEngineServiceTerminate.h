#pragma once

#include "BaseDeclarations.h"
struct FEngineServiceTerminate
{
	char __padding[0x10L];
	FString& UserNameField() { return *GetNativePointerField<FString*>(this, "FEngineServiceTerminate.UserName"); }

	// Functions

};

