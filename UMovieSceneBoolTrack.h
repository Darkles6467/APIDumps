#pragma once

#include "BaseDeclarations.h"
#include "UMovieScenePropertyTrack.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneBoolTrack : UMovieScenePropertyTrack
{

	// Functions

	bool AddKeyToSection(float Time, bool Value) { return NativeCall<bool, float, bool>(this, "UMovieSceneBoolTrack.AddKeyToSection", Time, Value); }
	bool Eval(float Position, float LastPostion, bool * OutBool) { return NativeCall<bool, float, float, bool *>(this, "UMovieSceneBoolTrack.Eval", Position, LastPostion, OutBool); }
};

