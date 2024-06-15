#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieScene2DTransformSection : UMovieSceneSection
{
	char __padding[0x2d8L];
	FieldArray<FRichCurve, 2> TranslationField() { return {this, "UMovieScene2DTransformSection.Translation"}; }
	FRichCurve& RotationField() { return *GetNativePointerField<FRichCurve*>(this, "UMovieScene2DTransformSection.Rotation"); }
	FieldArray<FRichCurve, 2> ScaleField() { return {this, "UMovieScene2DTransformSection.Scale"}; }
	FieldArray<FRichCurve, 2> ShearField() { return {this, "UMovieScene2DTransformSection.Shear"}; }

	// Functions

	void DilateSection(float DilationFactor, float Origin) { NativeCall<void, float, float>(this, "UMovieScene2DTransformSection.DilateSection", DilationFactor, Origin); }
	void MoveSection(float DeltaTime) { NativeCall<void, float>(this, "UMovieScene2DTransformSection.MoveSection", DeltaTime); }
};

