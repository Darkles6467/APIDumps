#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneColorSection : UMovieSceneSection
{
	char __padding[0x1a0L];
	FRichCurve& RedCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneColorSection.RedCurve"); }
	FRichCurve& GreenCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneColorSection.GreenCurve"); }
	FRichCurve& BlueCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneColorSection.BlueCurve"); }
	FRichCurve& AlphaCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieSceneColorSection.AlphaCurve"); }

	// Functions

	void AddKey(float Time, const FColorKey * Key) { NativeCall<void, float, const FColorKey *>(this, "UMovieSceneColorSection.AddKey", Time, Key); }
	void AddKeyToNamedCurve(float Time, const FColorKey * Key) { NativeCall<void, float, const FColorKey *>(this, "UMovieSceneColorSection.AddKeyToNamedCurve", Time, Key); }
	void DilateSection(float DilationFactor, float Origin) { NativeCall<void, float, float>(this, "UMovieSceneColorSection.DilateSection", DilationFactor, Origin); }
	void MoveSection(float DeltaTime) { NativeCall<void, float>(this, "UMovieSceneColorSection.MoveSection", DeltaTime); }
	bool NewKeyIsNewData(float Time, FLinearColor Value) { return NativeCall<bool, float, FLinearColor>(this, "UMovieSceneColorSection.NewKeyIsNewData", Time, Value); }
};

