#pragma once

#include "BaseDeclarations.h"
#include "UMovieScenePropertyTrack.h"
#include "UMovieSceneTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack
{

	// Functions

	bool AddKeyToSection(const FGuid * ObjectHandle, const FTransformKey * InKey, const bool bUnwindRotation) { return NativeCall<bool, const FGuid *, const FTransformKey *, const bool>(this, "UMovieScene3DTransformTrack.AddKeyToSection", ObjectHandle, InKey, bUnwindRotation); }
	bool Eval(float Position, float LastPosition, FVector * OutTranslation, FRotator * OutRotation, FVector * OutScale, bool * OutHasTranslationKeys, bool * OutHasRotationKeys, bool * OutHasScaleKeys) { return NativeCall<bool, float, float, FVector *, FRotator *, FVector *, bool *, bool *, bool *>(this, "UMovieScene3DTransformTrack.Eval", Position, LastPosition, OutTranslation, OutRotation, OutScale, OutHasTranslationKeys, OutHasRotationKeys, OutHasScaleKeys); }
};

