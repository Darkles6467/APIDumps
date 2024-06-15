#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMediaPlayer : UObject
{
	char __padding[0x80L];
	float& AutoPlayRateField() { return *GetNativePointerField<float*>(this, "UMediaPlayer.AutoPlayRate"); }
	TEnumAsByte<enum EMediaPlayerStreamModes>& StreamModeField() { return *GetNativePointerField<TEnumAsByte<enum EMediaPlayerStreamModes>*>(this, "UMediaPlayer.StreamMode"); }
	FString& URLField() { return *GetNativePointerField<FString*>(this, "UMediaPlayer.URL"); }
	FString& CurrentUrlField() { return *GetNativePointerField<FString*>(this, "UMediaPlayer.CurrentUrl"); }
	TSharedPtr<IMediaPlayer,0>& PlayerField() { return *GetNativePointerField<TSharedPtr<IMediaPlayer,0>*>(this, "UMediaPlayer.Player"); }
	UMediaPlayer::FOnMediaChanged& MediaChangedEventField() { return *GetNativePointerField<UMediaPlayer::FOnMediaChanged*>(this, "UMediaPlayer.MediaChangedEvent"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UMediaPlayer.BeginDestroy"); }
	bool IsPlaying() { return NativeCall<bool>(this, "UMediaPlayer.IsPlaying"); }
	bool CanPlay() { return NativeCall<bool>(this, "UMediaPlayer.CanPlay"); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UMediaPlayer.GetDesc", result); }
	FTimespan * GetDuration(FTimespan * result) { return NativeCall<FTimespan *, FTimespan *>(this, "UMediaPlayer.GetDuration", result); }
	bool GetMute() { return NativeCall<bool>(this, "UMediaPlayer.GetMute"); }
	float GetRate() { return NativeCall<float>(this, "UMediaPlayer.GetRate"); }
	FTimespan * GetTime(FTimespan * result) { return NativeCall<FTimespan *, FTimespan *>(this, "UMediaPlayer.GetTime", result); }
	bool IsLooping() { return NativeCall<bool>(this, "UMediaPlayer.IsLooping"); }
	bool IsPaused() { return NativeCall<bool>(this, "UMediaPlayer.IsPaused"); }
	bool IsStopped() { return NativeCall<bool>(this, "UMediaPlayer.IsStopped"); }
	bool OpenUrl(const FString * NewUrl) { return NativeCall<bool, const FString *>(this, "UMediaPlayer.OpenUrl", NewUrl); }
	bool Pause() { return NativeCall<bool>(this, "UMediaPlayer.Pause"); }
	bool Play() { return NativeCall<bool>(this, "UMediaPlayer.Play"); }
	void PostLoad() { NativeCall<void>(this, "UMediaPlayer.PostLoad"); }
	bool Rewind() { return NativeCall<bool>(this, "UMediaPlayer.Rewind"); }
	bool Seek(const FTimespan * InTime) { return NativeCall<bool, const FTimespan *>(this, "UMediaPlayer.Seek", InTime); }
	bool SetLooping(bool InLooping) { return NativeCall<bool, bool>(this, "UMediaPlayer.SetLooping", InLooping); }
	void SetMute(bool bMute) { NativeCall<void, bool>(this, "UMediaPlayer.SetMute", bMute); }
	bool SetRate(float Rate) { return NativeCall<bool, float>(this, "UMediaPlayer.SetRate", Rate); }
	bool SupportsRate(float Rate, bool Unthinned) { return NativeCall<bool, float, bool>(this, "UMediaPlayer.SupportsRate", Rate, Unthinned); }
	bool SupportsScrubbing() { return NativeCall<bool>(this, "UMediaPlayer.SupportsScrubbing"); }
	bool SupportsSeeking() { return NativeCall<bool>(this, "UMediaPlayer.SupportsSeeking"); }
};

