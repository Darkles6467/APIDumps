#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneBoolSection : UMovieSceneSection
{
	char __padding[0x68L];
	FIntegralCurve& BoolCurveField() { return *GetNativePointerField<FIntegralCurve*>(this, "UMovieSceneBoolSection.BoolCurve"); }

	// Functions

	void DilateSection(float DilationFactor, float Origin) { NativeCall<void, float, float>(this, "UMovieSceneBoolSection.DilateSection", DilationFactor, Origin); }
	bool Eval(float Position) { return NativeCall<bool, float>(this, "UMovieSceneBoolSection.Eval", Position); }
	void MoveSection(float DeltaPosition) { NativeCall<void, float>(this, "UMovieSceneBoolSection.MoveSection", DeltaPosition); }
};

