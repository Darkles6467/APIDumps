#pragma once

#include "BaseDeclarations.h"
struct FRemoteTalkerDataImpl
{
	char __padding[0x20L];
	long double& LastSeenField() { return *GetNativePointerField<long double*>(this, "FRemoteTalkerDataImpl.LastSeen"); }
	UAudioComponent * AudioComponentField() { return GetNativePointerField<UAudioComponent *>(this, "FRemoteTalkerDataImpl.AudioComponent"); }

	// Functions

};

