#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UMovieSceneSection : UObject
{
	char __padding[0x10L];
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "UMovieSceneSection.StartTime"); }
	float& EndTimeField() { return *GetNativePointerField<float*>(this, "UMovieSceneSection.EndTime"); }
	int& RowIndexField() { return *GetNativePointerField<int*>(this, "UMovieSceneSection.RowIndex"); }

	// Functions

	void AddKeyToCurve(FRichCurve * InCurve, float Time, float Value) { NativeCall<void, FRichCurve *, float, float>(this, "UMovieSceneSection.AddKeyToCurve", InCurve, Time, Value); }
	void DilateSection(float DilationFactor, float Origin) { NativeCall<void, float, float>(this, "UMovieSceneSection.DilateSection", DilationFactor, Origin); }
	void GetSnapTimes(TArray<float> * OutSnapTimes, bool bGetSectionBorders) { NativeCall<void, TArray<float> *, bool>(this, "UMovieSceneSection.GetSnapTimes", OutSnapTimes, bGetSectionBorders); }
	void InitialPlacement(const TArray<UMovieSceneSection *> * Sections, float InStartTime, float InEndTime, bool bAllowMultipleRows) { NativeCall<void, const TArray<UMovieSceneSection *> *, float, float, bool>(this, "UMovieSceneSection.InitialPlacement", Sections, InStartTime, InEndTime, bAllowMultipleRows); }
	void MoveSection(float DeltaTime) { NativeCall<void, float>(this, "UMovieSceneSection.MoveSection", DeltaTime); }
};

