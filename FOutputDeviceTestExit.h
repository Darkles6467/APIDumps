#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FOutputDeviceTestExit : FOutputDevice
{
	char __padding[0x10L];
	TArray<FString>& ExitPhrasesField() { return *GetNativePointerField<TArray<FString>*>(this, "FOutputDeviceTestExit.ExitPhrases"); }
};

