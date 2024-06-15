#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneParticleTrack : UMovieSceneTrack
{
	char __padding[0x10L];

	// Functions

	void AddNewParticleSystem(float KeyTime, bool bTrigger) { NativeCall<void, float, bool>(this, "UMovieSceneParticleTrack.AddNewParticleSystem", KeyTime, bTrigger); }
	TRange<float> * GetSectionBoundaries(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "UMovieSceneParticleTrack.GetSectionBoundaries", result); }
	FName * GetTrackName(FName * result) { return NativeCall<FName *, FName *>(this, "UMovieSceneParticleTrack.GetTrackName", result); }
};

