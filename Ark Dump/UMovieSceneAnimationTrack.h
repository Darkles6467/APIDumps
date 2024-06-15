#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneAnimationTrack : UMovieSceneTrack
{
	char __padding[0x10L];

	// Functions

	void AddNewAnimation(float KeyTime, UAnimSequence * AnimSequence) { NativeCall<void, float, UAnimSequence *>(this, "UMovieSceneAnimationTrack.AddNewAnimation", KeyTime, AnimSequence); }
	TRange<float> * GetSectionBoundaries(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "UMovieSceneAnimationTrack.GetSectionBoundaries", result); }
	FName * GetTrackName(FName * result) { return NativeCall<FName *, FName *>(this, "UMovieSceneAnimationTrack.GetTrackName", result); }
	bool IsEmpty() { return NativeCall<bool>(this, "UMovieSceneAnimationTrack.IsEmpty"); }
};

