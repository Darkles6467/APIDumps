#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieSceneAnimationTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x8L];
	UMovieSceneAnimationTrack * AnimationTrackField() { return GetNativePointerField<UMovieSceneAnimationTrack *>(this, "FMovieSceneAnimationTrackInstance.AnimationTrack"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneAnimationTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

