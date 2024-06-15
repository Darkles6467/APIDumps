#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FThreadedMusicPlayer : FRunnable
{
	char __padding[0x60L];
	bool& bForceLoadLibrariesField() { return *GetNativePointerField<bool*>(this, "FThreadedMusicPlayer.bForceLoadLibraries"); }
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FThreadedMusicPlayer.Stopping"); }
	TArray<FMusicPlayerTrackData>& MusicTrackEntriesField() { return *GetNativePointerField<TArray<FMusicPlayerTrackData>*>(this, "FThreadedMusicPlayer.MusicTrackEntries"); }
	FWindowsCriticalSection& TrackCriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FThreadedMusicPlayer.TrackCriticalSection"); }
	float& MasterVolumeField() { return *GetNativePointerField<float*>(this, "FThreadedMusicPlayer.MasterVolume"); }
};

