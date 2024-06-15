#pragma once

#include "BaseDeclarations.h"
struct FThreadedPlayerSoundQualityInfo
{
	char __padding[0x28L];
	int& QualityField() { return *GetNativePointerField<int*>(this, "FThreadedPlayerSoundQualityInfo.Quality"); }
	unsigned int& NumChannelsField() { return *GetNativePointerField<unsigned int*>(this, "FThreadedPlayerSoundQualityInfo.NumChannels"); }
	unsigned int& SampleRateField() { return *GetNativePointerField<unsigned int*>(this, "FThreadedPlayerSoundQualityInfo.SampleRate"); }
	unsigned int& SampleDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FThreadedPlayerSoundQualityInfo.SampleDataSize"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FThreadedPlayerSoundQualityInfo.Duration"); }
	FString& DebugNameField() { return *GetNativePointerField<FString*>(this, "FThreadedPlayerSoundQualityInfo.DebugName"); }
};

