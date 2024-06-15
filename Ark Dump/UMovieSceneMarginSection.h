#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneMarginSection : UMovieSceneSection
{
	char __padding[0x1a0L];
	FRichCurve& TopCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneMarginSection.TopCurve"); }
	FRichCurve& LeftCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneMarginSection.LeftCurve"); }
	FRichCurve& RightCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneMarginSection.RightCurve"); }
	FRichCurve& BottomCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneMarginSection.BottomCurve"); }

	// Functions

	void DilateSection(float DilationFactor, float Origin) { NativeCall<void, float, float>(this, "UMovieSceneMarginSection.DilateSection", DilationFactor, Origin); }
	void MoveSection(float DeltaTime) { NativeCall<void, float>(this, "UMovieSceneMarginSection.MoveSection", DeltaTime); }
};

