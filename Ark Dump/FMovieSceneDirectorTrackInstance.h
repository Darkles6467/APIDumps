#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieSceneDirectorTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x8L];
	UMovieSceneDirectorTrack * DirectorTrackField() { return GetNativePointerField<UMovieSceneDirectorTrack *>(this, "FMovieSceneDirectorTrackInstance.DirectorTrack"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneDirectorTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

