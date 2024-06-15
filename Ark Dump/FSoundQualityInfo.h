#pragma once

#include "BaseDeclarations.h"
struct FSoundQualityInfo
{
	char __padding[0x28L];
	int& QualityField() { return *GetNativePointerField<int*>(this, "FSoundQualityInfo.Quality"); }
	unsigned int& NumChannelsField() { return *GetNativePointerField<unsigned int*>(this, "FSoundQualityInfo.NumChannels"); }
	unsigned int& SampleRateField() { return *GetNativePointerField<unsigned int*>(this, "FSoundQualityInfo.SampleRate"); }
	unsigned int& SampleDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FSoundQualityInfo.SampleDataSize"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FSoundQualityInfo.Duration"); }
	FString& DebugNameField() { return *GetNativePointerField<FString*>(this, "FSoundQualityInfo.DebugName"); }
};

