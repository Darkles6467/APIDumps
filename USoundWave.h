#pragma once

#include "BaseDeclarations.h"
#include "USoundBase.h"

struct USoundWave : USoundBase
{
	char __padding[0x1a8L];
	int& CompressionQualityField() { return *GetNativePointerField<int*>(this, "USoundWave.CompressionQuality"); }
	int& StreamingPriorityField() { return *GetNativePointerField<int*>(this, "USoundWave.StreamingPriority"); }
	TEnumAsByte<enum ESoundGroup>& SoundGroupField() { return *GetNativePointerField<TEnumAsByte<enum ESoundGroup>*>(this, "USoundWave.SoundGroup"); }
	FString& SpokenTextField() { return *GetNativePointerField<FString*>(this, "USoundWave.SpokenText"); }
	TArray<FLocalizedSpokenText>& LocalizedSpokenTextsField() { return *GetNativePointerField<TArray<FLocalizedSpokenText>*>(this, "USoundWave.LocalizedSpokenTexts"); }
	char& SubtitleColorIndexField() { return *GetNativePointerField<char*>(this, "USoundWave.SubtitleColorIndex"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "USoundWave.Volume"); }
	float& PitchField() { return *GetNativePointerField<float*>(this, "USoundWave.Pitch"); }
	int& NumChannelsField() { return *GetNativePointerField<int*>(this, "USoundWave.NumChannels"); }
	int& SampleRateField() { return *GetNativePointerField<int*>(this, "USoundWave.SampleRate"); }
	int& RawPCMDataSizeField() { return *GetNativePointerField<int*>(this, "USoundWave.RawPCMDataSize"); }
	TArray<FSubtitleCue>& SubtitlesField() { return *GetNativePointerField<TArray<FSubtitleCue>*>(this, "USoundWave.Subtitles"); }
	TArray<FLocalizedSubtitle>& LocalizedSubtitlesField() { return *GetNativePointerField<TArray<FLocalizedSubtitle>*>(this, "USoundWave.LocalizedSubtitles"); }
	FAsyncTask<FAsyncAudioDecompressWorker> * AudioDecompressorField() { return GetNativePointerField<FAsyncTask<FAsyncAudioDecompressWorker> *>(this, "USoundWave.AudioDecompressor"); }
	char * CachedRealtimeFirstBufferField() { return GetNativePointerField<char *>(this, "USoundWave.CachedRealtimeFirstBuffer"); }
	char * RawPCMDataField() { return GetNativePointerField<char *>(this, "USoundWave.RawPCMData"); }
	char * ResourceDataField() { return GetNativePointerField<char *>(this, "USoundWave.ResourceData"); }
	FByteBulkData& RawDataField() { return *GetNativePointerField<FByteBulkData*>(this, "USoundWave.RawData"); }
	FGuid& CompressedDataGuidField() { return *GetNativePointerField<FGuid*>(this, "USoundWave.CompressedDataGuid"); }
	FFormatContainer& CompressedFormatDataField() { return *GetNativePointerField<FFormatContainer*>(this, "USoundWave.CompressedFormatData"); }
	TEnumAsByte<enum EDecompressionType>& DecompressionTypeField() { return *GetNativePointerField<TEnumAsByte<enum EDecompressionType>*>(this, "USoundWave.DecompressionType"); }
	int& ResourceIDField() { return *GetNativePointerField<int*>(this, "USoundWave.ResourceID"); }
	int& ResourceSizeField() { return *GetNativePointerField<int*>(this, "USoundWave.ResourceSize"); }
	int& TrackedMemoryUsageField() { return *GetNativePointerField<int*>(this, "USoundWave.TrackedMemoryUsage"); }
	FStreamedAudioPlatformData * RunningPlatformDataField() { return GetNativePointerField<FStreamedAudioPlatformData *>(this, "USoundWave.RunningPlatformData"); }
	FName& CompressionNameField() { return *GetNativePointerField<FName*>(this, "USoundWave.CompressionName"); }

	// Functions

	void CleanupCachedCookedPlatformData() { NativeCall<void>(this, "USoundWave.CleanupCachedCookedPlatformData"); }
	void CleanupCachedRunningPlatformData() { NativeCall<void>(this, "USoundWave.CleanupCachedRunningPlatformData"); }
	void SerializeCookedPlatformData(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USoundWave.SerializeCookedPlatformData", Ar); }
	void FinishDestroy() { NativeCall<void>(this, "USoundWave.FinishDestroy"); }
	void FreeResources() { NativeCall<void>(this, "USoundWave.FreeResources"); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "USoundWave.GetAssetRegistryTags", OutTags); }
	void GetChunkData(int ChunkIndex, char ** OutChunkData) { NativeCall<void, int, char **>(this, "USoundWave.GetChunkData", ChunkIndex, OutChunkData); }
	FByteBulkData * GetCompressedData(FName Format) { return NativeCall<FByteBulkData *, FName>(this, "USoundWave.GetCompressedData", Format); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "USoundWave.GetDesc", result); }
	float GetDuration() { return NativeCall<float>(this, "USoundWave.GetDuration"); }
	FName * GetExporterName(FName * result) { return NativeCall<FName *, FName *>(this, "USoundWave.GetExporterName", result); }
	float GetMaxAudibleDistance() { return NativeCall<float>(this, "USoundWave.GetMaxAudibleDistance"); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "USoundWave.GetResourceSize", Mode); }
	int GetResourceSizeForFormat(FName Format) { return NativeCall<int, FName>(this, "USoundWave.GetResourceSizeForFormat", Format); }
	FWaveInstance * HandleStart(FActiveSound * ActiveSound, const unsigned __int64 WaveInstanceHash) { return NativeCall<FWaveInstance *, FActiveSound *, const unsigned __int64>(this, "USoundWave.HandleStart", ActiveSound, WaveInstanceHash); }
	void InitAudioResource(FByteBulkData * CompressedData) { NativeCall<void, FByteBulkData *>(this, "USoundWave.InitAudioResource", CompressedData); }
	bool InitAudioResource(FName Format) { return NativeCall<bool, FName>(this, "USoundWave.InitAudioResource", Format); }
	bool IsLocalizedResource() { return NativeCall<bool>(this, "USoundWave.IsLocalizedResource"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "USoundWave.IsReadyForFinishDestroy"); }
	bool IsStreaming() { return NativeCall<bool>(this, "USoundWave.IsStreaming"); }
	void Parse(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundWave.Parse", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void PostInitProperties() { NativeCall<void>(this, "USoundWave.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "USoundWave.PostLoad"); }
	void RemoveAudioResource() { NativeCall<void>(this, "USoundWave.RemoveAudioResource"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USoundWave.Serialize", Ar); }
};

