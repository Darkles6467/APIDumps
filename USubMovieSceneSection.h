#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USubMovieSceneSection : UMovieSceneSection
{
	char __padding[0x10L];
	UMovieScene * MovieSceneField() { return GetNativePointerField<UMovieScene *>(this, "USubMovieSceneSection.MovieScene"); }
	float& MovieSceneStartTimeField() { return *GetNativePointerField<float*>(this, "USubMovieSceneSection.MovieSceneStartTime"); }
	float& MovieSceneTimeEndTimeField() { return *GetNativePointerField<float*>(this, "USubMovieSceneSection.MovieSceneTimeEndTime"); }

	// Functions

};

