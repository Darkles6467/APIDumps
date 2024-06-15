#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "IVirtualKeyboardEntry.h"
#include "FSlateFontMeasure.h"

struct UUMGSequencePlayer : UObject
{
	char __padding[0x68L];
	UMovieSceneBindings * RuntimeBindingsField() { return GetNativePointerField<UMovieSceneBindings *>(this, "UUMGSequencePlayer.RuntimeBindings"); }
	TRange<float>& TimeRangeField() { return *GetNativePointerField<TRange<float>*>(this, "UUMGSequencePlayer.TimeRange"); }
	long double& TimeCursorPositionField() { return *GetNativePointerField<long double*>(this, "UUMGSequencePlayer.TimeCursorPosition"); }
	EMovieScenePlayerStatus::Type& PlayerStatusField() { return *GetNativePointerField<EMovieScenePlayerStatus::Type*>(this, "UUMGSequencePlayer.PlayerStatus"); }
	UUMGSequencePlayer::FOnSequenceFinishedPlaying& OnSequenceFinishedPlayingEventField() { return *GetNativePointerField<UUMGSequencePlayer::FOnSequenceFinishedPlaying*>(this, "UUMGSequencePlayer.OnSequenceFinishedPlayingEvent"); }

	// Functions

	void AddMovieSceneInstance(bool bShow, TSharedPtr<IVirtualKeyboardEntry,0> TextEntryWidget) { NativeCall<void, bool, TSharedPtr<IVirtualKeyboardEntry,0>>(this, "UUMGSequencePlayer.AddMovieSceneInstance", bShow, TextEntryWidget); }
	TSharedRef<FSlateFontMeasure,0> * GetRootMovieSceneInstance(TSharedRef<FSlateFontMeasure,0> * result) { return NativeCall<TSharedRef<FSlateFontMeasure,0> *, TSharedRef<FSlateFontMeasure,0> *>(this, "UUMGSequencePlayer.GetRootMovieSceneInstance", result); }
	void GetRuntimeObjects(TSharedRef<FMovieSceneInstance,0> MovieSceneInstance, const FGuid * ObjectHandle, TArray<UObject *> * OutObjects) { NativeCall<void, TSharedRef<FMovieSceneInstance,0>, const FGuid *, TArray<UObject *> *>(this, "UUMGSequencePlayer.GetRuntimeObjects", MovieSceneInstance, ObjectHandle, OutObjects); }
	void InitSequencePlayer(const UWidgetAnimation * InAnimation, UUserWidget * UserWidget) { NativeCall<void, const UWidgetAnimation *, UUserWidget *>(this, "UUMGSequencePlayer.InitSequencePlayer", InAnimation, UserWidget); }
	void Play() { NativeCall<void>(this, "UUMGSequencePlayer.Play"); }
};

