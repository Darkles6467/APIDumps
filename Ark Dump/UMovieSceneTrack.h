#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UMovieSceneTrack : UObject
{

	// Functions

	TRange<float> * GetSectionBoundaries(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "UMovieSceneTrack.GetSectionBoundaries", result); }
	FName * GetTrackName(FName * result) { return NativeCall<FName *, FName *>(this, "UMovieSceneTrack.GetTrackName", result); }
	bool HasSection(UMovieSceneSection * Section) { return NativeCall<bool, UMovieSceneSection *>(this, "UMovieSceneTrack.HasSection", Section); }
	bool IsEmpty() { return NativeCall<bool>(this, "UMovieSceneTrack.IsEmpty"); }
	void RemoveSection(UMovieSceneSection * Section) { NativeCall<void, UMovieSceneSection *>(this, "UMovieSceneTrack.RemoveSection", Section); }
};

