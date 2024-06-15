#pragma once

#include "BaseDeclarations.h"
#include "UMovieScenePropertyTrack.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneColorTrack : UMovieScenePropertyTrack
{

	// Functions

	bool AddKeyToSection(float Time, const FColorKey * Key) { return NativeCall<bool, float, const FColorKey *>(this, "UMovieSceneColorTrack.AddKeyToSection", Time, Key); }
	bool Eval(float Position, float LastPosition, FLinearColor * OutColor) { return NativeCall<bool, float, float, FLinearColor *>(this, "UMovieSceneColorTrack.Eval", Position, LastPosition, OutColor); }
};

