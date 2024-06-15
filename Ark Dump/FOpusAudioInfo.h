#pragma once

#include "BaseDeclarations.h"
#include "ICompressedAudioInfo.h"

struct FOpusAudioInfo : ICompressedAudioInfo
{
	char __padding[0x68L];
	FOpusDecoderWrapper * OpusDecoderWrapperField() { return GetNativePointerField<FOpusDecoderWrapper *>(this, "FOpusAudioInfo.OpusDecoderWrapper"); }
	const char * SrcBufferDataField() { return GetNativePointerField<const char *>(this, "FOpusAudioInfo.SrcBufferData"); }
	unsigned int& SrcBufferDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.SrcBufferDataSize"); }
	unsigned int& SrcBufferOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.SrcBufferOffset"); }
	unsigned int& AudioDataOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.AudioDataOffset"); }
	unsigned __int16& SampleRateField() { return *GetNativePointerField<unsigned __int16*>(this, "FOpusAudioInfo.SampleRate"); }
	unsigned int& TrueSampleCountField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.TrueSampleCount"); }
	unsigned int& CurrentSampleCountField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.CurrentSampleCount"); }
	char& NumChannelsField() { return *GetNativePointerField<char*>(this, "FOpusAudioInfo.NumChannels"); }
	unsigned int& MaxFrameSizeSamplesField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.MaxFrameSizeSamples"); }
	unsigned int& SampleStrideField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.SampleStride"); }
	TArray<unsigned char>& LastDecodedPCMField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FOpusAudioInfo.LastDecodedPCM"); }
	unsigned int& LastPCMByteSizeField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.LastPCMByteSize"); }
	unsigned int& LastPCMOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FOpusAudioInfo.LastPCMOffset"); }
	bool& bStoringEndOfFileField() { return *GetNativePointerField<bool*>(this, "FOpusAudioInfo.bStoringEndOfFile"); }
	int& CurrentChunkIndexField() { return *GetNativePointerField<int*>(this, "FOpusAudioInfo.CurrentChunkIndex"); }

	// Functions

	static unsigned __int64 GetStreamBufferSize() { return NativeCall<unsigned __int64>(nullptr, "FOpusAudioInfo.GetStreamBufferSize"); }
	void ExpandFile(char * DstBuffer, FSoundQualityInfo * QualityInfo) { NativeCall<void, char *, FSoundQualityInfo *>(this, "FOpusAudioInfo.ExpandFile", DstBuffer, QualityInfo); }
	bool ReadCompressedData(char * Destination, bool bLooping, unsigned int BufferSize) { return NativeCall<bool, char *, bool, unsigned int>(this, "FOpusAudioInfo.ReadCompressedData", Destination, bLooping, BufferSize); }
	bool ReadCompressedInfo(const char * InSrcBufferData, unsigned int InSrcBufferDataSize, FSoundQualityInfo * QualityInfo) { return NativeCall<bool, const char *, unsigned int, FSoundQualityInfo *>(this, "FOpusAudioInfo.ReadCompressedInfo", InSrcBufferData, InSrcBufferDataSize, QualityInfo); }
	bool StreamCompressedData(char * Destination, bool bLooping, unsigned int BufferSize) { return NativeCall<bool, char *, bool, unsigned int>(this, "FOpusAudioInfo.StreamCompressedData", Destination, bLooping, BufferSize); }
	bool StreamCompressedInfo(USoundWave * Wave, FSoundQualityInfo * QualityInfo) { return NativeCall<bool, USoundWave *, FSoundQualityInfo *>(this, "FOpusAudioInfo.StreamCompressedInfo", Wave, QualityInfo); }
	int GetCurrentChunkOffset() { return NativeCall<int>(this, "FOpusAudioInfo.GetCurrentChunkOffset"); }
};

