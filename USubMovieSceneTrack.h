#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USubMovieSceneTrack : UMovieSceneTrack
{
	char __padding[0x10L];

	// Functions

	void AddMovieSceneSection(UMovieScene * SubMovieScene, float Time) { NativeCall<void, UMovieScene *, float>(this, "USubMovieSceneTrack.AddMovieSceneSection", SubMovieScene, Time); }
	TRange<float> * GetSectionBoundaries(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "USubMovieSceneTrack.GetSectionBoundaries", result); }
	FName * GetTrackName(FName * result) { return NativeCall<FName *, FName *>(this, "USubMovieSceneTrack.GetTrackName", result); }
	bool HasSection(UMovieSceneSection * Section) { return NativeCall<bool, UMovieSceneSection *>(this, "USubMovieSceneTrack.HasSection", Section); }
};

