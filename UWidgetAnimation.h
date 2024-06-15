#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UWidgetAnimation : UObject
{
	char __padding[0x18L];
	UMovieScene * MovieSceneField() { return GetNativePointerField<UMovieScene *>(this, "UWidgetAnimation.MovieScene"); }
	TArray<FWidgetAnimationBinding>& AnimationBindingsField() { return *GetNativePointerField<TArray<FWidgetAnimationBinding>*>(this, "UWidgetAnimation.AnimationBindings"); }

	// Functions

};

