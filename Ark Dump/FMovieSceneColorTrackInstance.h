#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieSceneColorTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x18L];
	UMovieSceneColorTrack * ColorTrackField() { return GetNativePointerField<UMovieSceneColorTrack *>(this, "FMovieSceneColorTrackInstance.ColorTrack"); }
	TSharedPtr<FTrackInstancePropertyBindings,0>& PropertyBindingsField() { return *GetNativePointerField<TSharedPtr<FTrackInstancePropertyBindings,0>*>(this, "FMovieSceneColorTrackInstance.PropertyBindings"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneColorTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

