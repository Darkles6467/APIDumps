#pragma once

#include "BaseDeclarations.h"
#include "ICompressedAudioInfo.h"

struct FVorbisAudioInfo : ICompressedAudioInfo
{
	char __padding[0x18L];
	FVorbisFileWrapper * VFWrapperField() { return GetNativePointerField<FVorbisFileWrapper *>(this, "FVorbisAudioInfo.VFWrapper"); }
	const char * SrcBufferDataField() { return GetNativePointerField<const char *>(this, "FVorbisAudioInfo.SrcBufferData"); }
	unsigned int& SrcBufferDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FVorbisAudioInfo.SrcBufferDataSize"); }
	unsigned int& BufferOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FVorbisAudioInfo.BufferOffset"); }

	// Functions

	void EnableHalfRate(bool HalfRate) { NativeCall<void, bool>(this, "FVorbisAudioInfo.EnableHalfRate", HalfRate); }
	void ExpandFile(char * DstBuffer, FSoundQualityInfo * QualityInfo) { NativeCall<void, char *, FSoundQualityInfo *>(this, "FVorbisAudioInfo.ExpandFile", DstBuffer, QualityInfo); }
	bool ReadCompressedData(char * InDestination, bool bLooping, unsigned int BufferSize) { return NativeCall<bool, char *, bool, unsigned int>(this, "FVorbisAudioInfo.ReadCompressedData", InDestination, bLooping, BufferSize); }
	bool ReadCompressedInfo(const char * InSrcBufferData, unsigned int InSrcBufferDataSize, FSoundQualityInfo * QualityInfo) { return NativeCall<bool, const char *, unsigned int, FSoundQualityInfo *>(this, "FVorbisAudioInfo.ReadCompressedInfo", InSrcBufferData, InSrcBufferDataSize, QualityInfo); }
	void SeekToTime(const float SeekTime) { NativeCall<void, const float>(this, "FVorbisAudioInfo.SeekToTime", SeekTime); }
};

