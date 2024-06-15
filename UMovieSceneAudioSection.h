#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneAudioSection : UMovieSceneSection
{
	char __padding[0x10L];
	float& AudioStartTimeField() { return *GetNativePointerField<float*>(this, "UMovieSceneAudioSection.AudioStartTime"); }
	float& AudioDilationFactorField() { return *GetNativePointerField<float*>(this, "UMovieSceneAudioSection.AudioDilationFactor"); }

	// Functions

	void DilateSection(float DilationFactor, float Origin) { NativeCall<void, float, float>(this, "UMovieSceneAudioSection.DilateSection", DilationFactor, Origin); }
	void GetSnapTimes(TArray<float> * OutSnapTimes, bool bGetSectionBorders) { NativeCall<void, TArray<float> *, bool>(this, "UMovieSceneAudioSection.GetSnapTimes", OutSnapTimes, bGetSectionBorders); }
	void MoveSection(float DeltaTime) { NativeCall<void, float>(this, "UMovieSceneAudioSection.MoveSection", DeltaTime); }
};

