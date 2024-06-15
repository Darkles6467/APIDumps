#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieSceneFloatTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x18L];
	UMovieSceneFloatTrack * FloatTrackField() { return GetNativePointerField<UMovieSceneFloatTrack *>(this, "FMovieSceneFloatTrackInstance.FloatTrack"); }
	TSharedPtr<FTrackInstancePropertyBindings,0>& PropertyBindingsField() { return *GetNativePointerField<TSharedPtr<FTrackInstancePropertyBindings,0>*>(this, "FMovieSceneFloatTrackInstance.PropertyBindings"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneFloatTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
	void RefreshInstance(const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneFloatTrackInstance.RefreshInstance", RuntimeObjects, Player); }
};

