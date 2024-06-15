#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieSceneMarginTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x18L];
	UMovieSceneMarginTrack * MarginTrackField() { return GetNativePointerField<UMovieSceneMarginTrack *>(this, "FMovieSceneMarginTrackInstance.MarginTrack"); }
	TSharedPtr<FTrackInstancePropertyBindings,0>& PropertyBindingsField() { return *GetNativePointerField<TSharedPtr<FTrackInstancePropertyBindings,0>*>(this, "FMovieSceneMarginTrackInstance.PropertyBindings"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneMarginTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

