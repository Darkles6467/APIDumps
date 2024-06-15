#pragma once

#include "BaseDeclarations.h"
struct IMovieStreamer
{
	char __padding[0x8L];

	// Functions

};

struct FMediaFoundationMovieStreamer : IMovieStreamer
{
	char __padding[0x60L];
	TArray<FString>& StoredMoviePathsField() { return *GetNativePointerField<TArray<FString>*>(this, "FMediaFoundationMovieStreamer.StoredMoviePaths"); }
	TArray<unsigned char>& TextureDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FMediaFoundationMovieStreamer.TextureData"); }
	TSharedPtr<FMovieViewport,0>& MovieViewportField() { return *GetNativePointerField<TSharedPtr<FMovieViewport,0>*>(this, "FMediaFoundationMovieStreamer.MovieViewport"); }
	FVideoPlayer * VideoPlayerField() { return GetNativePointerField<FVideoPlayer *>(this, "FMediaFoundationMovieStreamer.VideoPlayer"); }
	FSampleGrabberCallback * SampleGrabberCallbackField() { return GetNativePointerField<FSampleGrabberCallback *>(this, "FMediaFoundationMovieStreamer.SampleGrabberCallback"); }

	// Functions

	void Cleanup() { NativeCall<void>(this, "FMediaFoundationMovieStreamer.Cleanup"); }
	void CloseMovie() { NativeCall<void>(this, "FMediaFoundationMovieStreamer.CloseMovie"); }
	void ForceCompletion() { NativeCall<void>(this, "FMediaFoundationMovieStreamer.ForceCompletion"); }
	float GetAspectRatio() { return NativeCall<float>(this, "FMediaFoundationMovieStreamer.GetAspectRatio"); }
	bool Init(const TArray<FString> * MoviePaths) { return NativeCall<bool, const TArray<FString> *>(this, "FMediaFoundationMovieStreamer.Init", MoviePaths); }
	void OpenNextMovie() { NativeCall<void>(this, "FMediaFoundationMovieStreamer.OpenNextMovie"); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FMediaFoundationMovieStreamer.Tick", DeltaTime); }
};

