#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneTrack.h"

struct UMovieScenePropertyTrack : UMovieSceneTrack
{
	char __padding[0x30L];
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "UMovieScenePropertyTrack.PropertyName"); }
	FString& PropertyPathField() { return *GetNativePointerField<FString*>(this, "UMovieScenePropertyTrack.PropertyPath"); }
	bool& bSectionsAreShowableField() { return *GetNativePointerField<bool*>(this, "UMovieScenePropertyTrack.bSectionsAreShowable"); }

	// Functions

	TRange<float> * GetSectionBoundaries(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "UMovieScenePropertyTrack.GetSectionBoundaries", result); }
	FVector2D * GetTrackName(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "UMovieScenePropertyTrack.GetTrackName", result); }
	bool HasSection(UMovieSceneSection * Section) { return NativeCall<bool, UMovieSceneSection *>(this, "UMovieScenePropertyTrack.HasSection", Section); }
	bool HasShowableData() { return NativeCall<bool>(this, "UMovieScenePropertyTrack.HasShowableData"); }
	bool IsEmpty() { return NativeCall<bool>(this, "UMovieScenePropertyTrack.IsEmpty"); }
	void RemoveAllAnimationData() { NativeCall<void>(this, "UMovieScenePropertyTrack.RemoveAllAnimationData"); }
	void RemoveSection(UMovieSceneSection * Section) { NativeCall<void, UMovieSceneSection *>(this, "UMovieScenePropertyTrack.RemoveSection", Section); }
	void SetPropertyNameAndPath(FName InPropertyName, const FString * InPropertyPath) { NativeCall<void, FName, const FString *>(this, "UMovieScenePropertyTrack.SetPropertyNameAndPath", InPropertyName, InPropertyPath); }
};

