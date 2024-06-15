#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FSubMovieSceneTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x58L];
	TWeakObjectPtr<USubMovieSceneTrack>& SubMovieSceneTrackField() { return *GetNativePointerField<TWeakObjectPtr<USubMovieSceneTrack>*>(this, "FSubMovieSceneTrackInstance.SubMovieSceneTrack"); }

	// Functions

	void RefreshInstance(const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FSubMovieSceneTrackInstance.RefreshInstance", RuntimeObjects, Player); }
	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FSubMovieSceneTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

