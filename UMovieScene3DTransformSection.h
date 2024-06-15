#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieScene3DTransformSection : UMovieSceneSection
{
	char __padding[0x3a8L];
	FieldArray<FRichCurve, 3> TranslationField() { return {this, "UMovieScene3DTransformSection.Translation"}; }
	FieldArray<FRichCurve, 3> RotationField() { return {this, "UMovieScene3DTransformSection.Rotation"}; }
	FieldArray<FRichCurve, 3> ScaleField() { return {this, "UMovieScene3DTransformSection.Scale"}; }

	// Functions

	void AddRotationKeys(const FTransformKey * TransformKey, const bool bUnwindRotation) { NativeCall<void, const FTransformKey *, const bool>(this, "UMovieScene3DTransformSection.AddRotationKeys", TransformKey, bUnwindRotation); }
	void AddScaleKeys(const FTransformKey * TransformKey) { NativeCall<void, const FTransformKey *>(this, "UMovieScene3DTransformSection.AddScaleKeys", TransformKey); }
	void AddTranslationKeys(const FTransformKey * TransformKey) { NativeCall<void, const FTransformKey *>(this, "UMovieScene3DTransformSection.AddTranslationKeys", TransformKey); }
	void DilateSection(float DilationFactor, float Origin) { NativeCall<void, float, float>(this, "UMovieScene3DTransformSection.DilateSection", DilationFactor, Origin); }
	bool EvalRotation(float Time, FRotator * OutRotation) { return NativeCall<bool, float, FRotator *>(this, "UMovieScene3DTransformSection.EvalRotation", Time, OutRotation); }
	bool EvalScale(float Time, FVector * OutScale) { return NativeCall<bool, float, FVector *>(this, "UMovieScene3DTransformSection.EvalScale", Time, OutScale); }
	bool EvalTranslation(float Time, FVector * OutTranslation) { return NativeCall<bool, float, FVector *>(this, "UMovieScene3DTransformSection.EvalTranslation", Time, OutTranslation); }
	void MoveSection(float DeltaTime) { NativeCall<void, float>(this, "UMovieScene3DTransformSection.MoveSection", DeltaTime); }
	bool NewKeyIsNewData(const FTransformKey * TransformKey) { return NativeCall<bool, const FTransformKey *>(this, "UMovieScene3DTransformSection.NewKeyIsNewData", TransformKey); }
};

