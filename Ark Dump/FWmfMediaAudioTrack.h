#pragma once

#include "BaseDeclarations.h"
#include "FWmfMediaTrack.h"
#include "IMediaTrack.h"

struct FWmfMediaAudioTrack : FWmfMediaTrack
{
	char __padding[0x10L];
	unsigned int& NumChannelsField() { return *GetNativePointerField<unsigned int*>(this, "FWmfMediaAudioTrack.NumChannels"); }
	unsigned int& SamplesPerSecondField() { return *GetNativePointerField<unsigned int*>(this, "FWmfMediaAudioTrack.SamplesPerSecond"); }

	// Functions

};

