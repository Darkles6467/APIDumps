#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieScene2DTransformTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x18L];
	UMovieScene2DTransformTrack * TransformTrackField() { return GetNativePointerField<UMovieScene2DTransformTrack *>(this, "FMovieScene2DTransformTrackInstance.TransformTrack"); }
	TSharedPtr<FTrackInstancePropertyBindings,0>& PropertyBindingsField() { return *GetNativePointerField<TSharedPtr<FTrackInstancePropertyBindings,0>*>(this, "FMovieScene2DTransformTrackInstance.PropertyBindings"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieScene2DTransformTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

