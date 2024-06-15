#pragma once

#include "BaseDeclarations.h"
#include "IMovieSceneTrackInstance.h"

struct FMovieSceneParticleTrackInstance : IMovieSceneTrackInstance
{
	char __padding[0x8L];
	UMovieSceneParticleTrack * ParticleTrackField() { return GetNativePointerField<UMovieSceneParticleTrack *>(this, "FMovieSceneParticleTrackInstance.ParticleTrack"); }

	// Functions

	void Update(float Position, float LastPosition, const TArray<UObject *> * RuntimeObjects, IMovieScenePlayer * Player) { NativeCall<void, float, float, const TArray<UObject *> *, IMovieScenePlayer *>(this, "FMovieSceneParticleTrackInstance.Update", Position, LastPosition, RuntimeObjects, Player); }
};

