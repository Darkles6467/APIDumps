#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieScene3DTransformTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x8L];
	UMovieScene3DTransformTrack * TransformTrackField() { return GetNativePointerField<UMovieScene3DTransformTrack *>(this, "FMovieScene3DTransformTrackInstance.TransformTrack"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieScene3DTransformTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

