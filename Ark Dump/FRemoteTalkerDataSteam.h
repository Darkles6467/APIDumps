#pragma once

#include "BaseDeclarations.h"
struct FRemoteTalkerDataSteam
{
	char __padding[0x28L];
	long double& LastSeenField() { return *GetNativePointerField<long double*>(this, "FRemoteTalkerDataSteam.LastSeen"); }
	TWeakObjectPtr<UAudioComponent>& AudioComponentField() { return *GetNativePointerField<TWeakObjectPtr<UAudioComponent>*>(this, "FRemoteTalkerDataSteam.AudioComponent"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FRemoteTalkerDataSteam.Location"); }
	char& PlaybackFlagsField() { return *GetNativePointerField<char*>(this, "FRemoteTalkerDataSteam.PlaybackFlags"); }
	bool& IsTalkingField() { return *GetNativePointerField<bool*>(this, "FRemoteTalkerDataSteam.IsTalking"); }
	bool& bUseSuperRangeField() { return *GetNativePointerField<bool*>(this, "FRemoteTalkerDataSteam.bUseSuperRange"); }
};

