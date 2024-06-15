#pragma once

#include "BaseDeclarations.h"
#include "UMovieScenePropertyTrack.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneFloatTrack : UMovieScenePropertyTrack
{

	// Functions

	bool AddKeyToSection(float Time, float Value) { return NativeCall<bool, float, float>(this, "UMovieSceneFloatTrack.AddKeyToSection", Time, Value); }
	bool Eval(float Position, float LastPosition, float * OutFloat) { return NativeCall<bool, float, float, float *>(this, "UMovieSceneFloatTrack.Eval", Position, LastPosition, OutFloat); }
};

