#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGuid.h"

struct UMovieSceneDirectorTrack : UMovieSceneTrack
{
	char __padding[0x10L];

	// Functions

	void AddNewShot(FGuid CameraHandle, float Time) { NativeCall<void, FGuid, float>(this, "UMovieSceneDirectorTrack.AddNewShot", CameraHandle, Time); }
	TRange<float> * GetSectionBoundaries(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "UMovieSceneDirectorTrack.GetSectionBoundaries", result); }
	FName * GetTrackName(FName * result) { return NativeCall<FName *, FName *>(this, "UMovieSceneDirectorTrack.GetTrackName", result); }
	void RemoveAllAnimationData() { NativeCall<void>(this, "UMovieSceneDirectorTrack.RemoveAllAnimationData"); }
};

