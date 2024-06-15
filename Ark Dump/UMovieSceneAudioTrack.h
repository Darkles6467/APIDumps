#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneAudioTrack : UMovieSceneTrack
{
	char __padding[0x10L];

	// Functions

	void AddNewSound(USoundBase * Sound, float Time) { NativeCall<void, USoundBase *, float>(this, "UMovieSceneAudioTrack.AddNewSound", Sound, Time); }
	TRange<float> * GetSectionBoundaries(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "UMovieSceneAudioTrack.GetSectionBoundaries", result); }
	FName * GetTrackName(FName * result) { return NativeCall<FName *, FName *>(this, "UMovieSceneAudioTrack.GetTrackName", result); }
	bool HasSection(UMovieSceneSection * Section) { return NativeCall<bool, UMovieSceneSection *>(this, "UMovieSceneAudioTrack.HasSection", Section); }
};

