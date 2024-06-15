#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneFloatSection : UMovieSceneSection
{
	char __padding[0x68L];
	FRichCurve& FloatCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneFloatSection.FloatCurve"); }

	// Functions

	void DilateSection(float DilationFactor, float Origin) { NativeCall<void, float, float>(this, "UMovieSceneFloatSection.DilateSection", DilationFactor, Origin); }
	void MoveSection(float DeltaPosition) { NativeCall<void, float>(this, "UMovieSceneFloatSection.MoveSection", DeltaPosition); }
	bool NewKeyIsNewData(float Time, float Value) { return NativeCall<bool, float, float>(this, "UMovieSceneFloatSection.NewKeyIsNewData", Time, Value); }
};

