#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieSceneAudioTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x18L];
	UMovieSceneAudioTrack * AudioTrackField() { return GetNativePointerField<UMovieSceneAudioTrack *>(this, "FMovieSceneAudioTrackInstance.AudioTrack"); }

	// Functions

	UAudioComponent * GetAudioComponent(AActor * Actor, int RowIndex) { return NativeCall<UAudioComponent *, AActor *, int>(this, "FMovieSceneAudioTrackInstance.GetAudioComponent", Actor, RowIndex); }
	void PlaySound(UMovieSceneAudioSection * AudioSection, UAudioComponent * Component, float Time) { NativeCall<void, UMovieSceneAudioSection *, UAudioComponent *, float>(this, "FMovieSceneAudioTrackInstance.PlaySound", AudioSection, Component, Time); }
	void StopAllSounds() { NativeCall<void>(this, "FMovieSceneAudioTrackInstance.StopAllSounds"); }
	void StopSound(int RowIndex) { NativeCall<void, int>(this, "FMovieSceneAudioTrackInstance.StopSound", RowIndex); }
	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneAudioTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

