#pragma once

#include "BaseDeclarations.h"
struct IMediaInfo
{
	char __padding[0x8L];
};

struct FWmfMediaPlayer : IMediaInfo
{
	char __padding[0x80L];
	FTimespan& DurationField() { return *GetNativePointerField<FTimespan*>(this, "FWmfMediaPlayer.Duration"); }
	TComPtr<FWmfMediaSession>& MediaSessionField() { return *GetNativePointerField<TComPtr<FWmfMediaSession>*>(this, "FWmfMediaPlayer.MediaSession"); }
	TComPtr<IMFMediaSource>& MediaSourceField() { return *GetNativePointerField<TComPtr<IMFMediaSource>*>(this, "FWmfMediaPlayer.MediaSource"); }
	FString& MediaUrlField() { return *GetNativePointerField<FString*>(this, "FWmfMediaPlayer.MediaUrl"); }
	FWmfMediaPlayer::FOnMediaClosed& ClosedEventField() { return *GetNativePointerField<FWmfMediaPlayer::FOnMediaClosed*>(this, "FWmfMediaPlayer.ClosedEvent"); }
	FWmfMediaPlayer::FOnMediaOpened& OpenedEventField() { return *GetNativePointerField<FWmfMediaPlayer::FOnMediaOpened*>(this, "FWmfMediaPlayer.OpenedEvent"); }

	// Functions

	void AddStreamToTopology(unsigned int StreamIndex, IMFTopology * Topology, IMFPresentationDescriptor * PresentationDescriptor, IMFMediaSource * MediaSource) { NativeCall<void, unsigned int, IMFTopology *, IMFPresentationDescriptor *, IMFMediaSource *>(this, "FWmfMediaPlayer.AddStreamToTopology", StreamIndex, Topology, PresentationDescriptor, MediaSource); }
	void Close() { NativeCall<void>(this, "FWmfMediaPlayer.Close"); }
	float GetRate() { return NativeCall<float>(this, "FWmfMediaPlayer.GetRate"); }
	TRange<float> * GetSupportedRates(TRange<float> * result, EMediaPlaybackDirections Direction, bool Unthinned) { return NativeCall<TRange<float> *, TRange<float> *, EMediaPlaybackDirections, bool>(this, "FWmfMediaPlayer.GetSupportedRates", result, Direction, Unthinned); }
	FTimespan * GetTime(FTimespan * result) { return NativeCall<FTimespan *, FTimespan *>(this, "FWmfMediaPlayer.GetTime", result); }
	bool InitializeMediaSession(IUnknown * SourceObject, const FString * SourceUrl) { return NativeCall<bool, IUnknown *, const FString *>(this, "FWmfMediaPlayer.InitializeMediaSession", SourceObject, SourceUrl); }
	bool IsLooping() { return NativeCall<bool>(this, "FWmfMediaPlayer.IsLooping"); }
	bool IsPaused() { return NativeCall<bool>(this, "FWmfMediaPlayer.IsPaused"); }
	bool IsPlaying() { return NativeCall<bool>(this, "FWmfMediaPlayer.IsPlaying"); }
	bool IsReady() { return NativeCall<bool>(this, "FWmfMediaPlayer.IsReady"); }
	bool Open(const TSharedRef<TArray<unsigned char>,1> * Buffer, const FString * OriginalUrl) { return NativeCall<bool, const TSharedRef<TArray<unsigned char>,1> *, const FString *>(this, "FWmfMediaPlayer.Open", Buffer, OriginalUrl); }
	bool Open(const FString * Url) { return NativeCall<bool, const FString *>(this, "FWmfMediaPlayer.Open", Url); }
	bool Seek(const FTimespan * Time) { return NativeCall<bool, const FTimespan *>(this, "FWmfMediaPlayer.Seek", Time); }
	bool SetLooping(bool Looping) { return NativeCall<bool, bool>(this, "FWmfMediaPlayer.SetLooping", Looping); }
	bool SetRate(float Rate) { return NativeCall<bool, float>(this, "FWmfMediaPlayer.SetRate", Rate); }
	bool SupportsRate(float Rate, bool Unthinned) { return NativeCall<bool, float, bool>(this, "FWmfMediaPlayer.SupportsRate", Rate, Unthinned); }
	bool SupportsScrubbing() { return NativeCall<bool>(this, "FWmfMediaPlayer.SupportsScrubbing"); }
	bool SupportsSeeking() { return NativeCall<bool>(this, "FWmfMediaPlayer.SupportsSeeking"); }
};

