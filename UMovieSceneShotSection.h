#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneShotSection : UMovieSceneSection
{
	char __padding[0x38L];
	FGuid& CameraGuidField() { return *GetNativePointerField<FGuid*>(this, "UMovieSceneShotSection.CameraGuid"); }
	FText& TitleField() { return *GetNativePointerField<FText*>(this, "UMovieSceneShotSection.Title"); }

	// Functions

	FGuid * GetCameraGuid(FGuid * result) { return NativeCall<FGuid *, FGuid *>(this, "UMovieSceneShotSection.GetCameraGuid", result); }
	FText * GetTitle(FText * result) { return NativeCall<FText *, FText *>(this, "UMovieSceneShotSection.GetTitle", result); }
	void SetTitle(const FText * InTitle) { NativeCall<void, const FText *>(this, "UMovieSceneShotSection.SetTitle", InTitle); }
};

