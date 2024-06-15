#pragma once

#include "BaseDeclarations.h"
#include "UDEPRECATED_SoundNodeDeprecated.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDEPRECATED_SoundNodeWave : UDEPRECATED_SoundNodeDeprecated
{
	char __padding[0xa0L];
	int& CompressionQualityField() { return *GetNativePointerField<int*>(this, "UDEPRECATED_SoundNodeWave.CompressionQuality"); }
	FString& SpokenTextField() { return *GetNativePointerField<FString*>(this, "UDEPRECATED_SoundNodeWave.SpokenText"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeWave.Volume"); }
	float& PitchField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeWave.Pitch"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeWave.Duration"); }
	int& NumChannelsField() { return *GetNativePointerField<int*>(this, "UDEPRECATED_SoundNodeWave.NumChannels"); }
	int& SampleRateField() { return *GetNativePointerField<int*>(this, "UDEPRECATED_SoundNodeWave.SampleRate"); }
	int& RawPCMDataSizeField() { return *GetNativePointerField<int*>(this, "UDEPRECATED_SoundNodeWave.RawPCMDataSize"); }
	TArray<FSubtitleCue>& SubtitlesField() { return *GetNativePointerField<TArray<FSubtitleCue>*>(this, "UDEPRECATED_SoundNodeWave.Subtitles"); }
	TArray<FLocalizedSubtitle>& LocalizedSubtitlesField() { return *GetNativePointerField<TArray<FLocalizedSubtitle>*>(this, "UDEPRECATED_SoundNodeWave.LocalizedSubtitles"); }
	FByteBulkData& RawDataField() { return *GetNativePointerField<FByteBulkData*>(this, "UDEPRECATED_SoundNodeWave.RawData"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UDEPRECATED_SoundNodeWave.Serialize", Ar); }
};

