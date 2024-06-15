#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieSceneBoolTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x18L];
	UMovieSceneBoolTrack * BoolTrackField() { return GetNativePointerField<UMovieSceneBoolTrack *>(this, "FMovieSceneBoolTrackInstance.BoolTrack"); }
	TSharedPtr<FTrackInstancePropertyBindings,0>& PropertyBindingsField() { return *GetNativePointerField<TSharedPtr<FTrackInstancePropertyBindings,0>*>(this, "FMovieSceneBoolTrackInstance.PropertyBindings"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneBoolTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

