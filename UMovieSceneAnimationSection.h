#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneAnimationSection : UMovieSceneSection
{
	char __padding[0x10L];
	UAnimSequence * AnimSequenceField() { return GetNativePointerField<UAnimSequence *>(this, "UMovieSceneAnimationSection.AnimSequence"); }
	float& AnimationStartTimeField() { return *GetNativePointerField<float*>(this, "UMovieSceneAnimationSection.AnimationStartTime"); }
	float& AnimationDilationFactorField() { return *GetNativePointerField<float*>(this, "UMovieSceneAnimationSection.AnimationDilationFactor"); }

	// Functions

	void GetSnapTimes(TArray<float> * OutSnapTimes, bool bGetSectionBorders) { NativeCall<void, TArray<float> *, bool>(this, "UMovieSceneAnimationSection.GetSnapTimes", OutSnapTimes, bGetSectionBorders); }
};

