#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FAsyncMusicPlayerDecompressorWorker : FNonAbandonableTask
{
	char __padding[0x50L];
	FSoundQualityInfo& QualityInfoField() { return *GetNativePointerField<FSoundQualityInfo*>(this, "FAsyncMusicPlayerDecompressorWorker.QualityInfo"); }
	FVorbisAudioInfo * pAudioInfoField() { return GetNativePointerField<FVorbisAudioInfo *>(this, "FAsyncMusicPlayerDecompressorWorker.pAudioInfo"); }
	char * MusicDataField() { return GetNativePointerField<char *>(this, "FAsyncMusicPlayerDecompressorWorker.MusicData"); }
	unsigned int& MusicDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FAsyncMusicPlayerDecompressorWorker.MusicDataSize"); }
	bool& bSuccessfulField() { return *GetNativePointerField<bool*>(this, "FAsyncMusicPlayerDecompressorWorker.bSuccessful"); }
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FAsyncMusicPlayerDecompressorWorker.Filename"); }
};

