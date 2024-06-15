#pragma once

#include "BaseDeclarations.h"
#include "IMediaTrack.h"
#include "IMediaSink.h"

struct FWmfMediaTrack : IMediaTrack
{
	char __padding[0x48L];
	FString& LanguageField() { return *GetNativePointerField<FString*>(this, "FWmfMediaTrack.Language"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FWmfMediaTrack.Name"); }
	TComPtr<IMFPresentationDescriptor>& PresentationDescriptorField() { return *GetNativePointerField<TComPtr<IMFPresentationDescriptor>*>(this, "FWmfMediaTrack.PresentationDescriptor"); }
	bool& ProtectedField() { return *GetNativePointerField<bool*>(this, "FWmfMediaTrack.Protected"); }
	TComPtr<FWmfMediaSampler>& SamplerField() { return *GetNativePointerField<TComPtr<FWmfMediaSampler>*>(this, "FWmfMediaTrack.Sampler"); }
	TComPtr<IMFStreamDescriptor>& StreamDescriptorField() { return *GetNativePointerField<TComPtr<IMFStreamDescriptor>*>(this, "FWmfMediaTrack.StreamDescriptor"); }
	unsigned int& StreamIndexField() { return *GetNativePointerField<unsigned int*>(this, "FWmfMediaTrack.StreamIndex"); }

	// Functions

	void AddSink(const TSharedRef<IMediaSink,1> * Sink) { NativeCall<void, const TSharedRef<IMediaSink,1> *>(this, "FWmfMediaTrack.AddSink", Sink); }
	bool Disable() { return NativeCall<bool>(this, "FWmfMediaTrack.Disable"); }
	bool Enable() { return NativeCall<bool>(this, "FWmfMediaTrack.Enable"); }
	FText * GetDisplayName(FText * result) { return NativeCall<FText *, FText *>(this, "FWmfMediaTrack.GetDisplayName", result); }
	bool IsEnabled() { return NativeCall<bool>(this, "FWmfMediaTrack.IsEnabled"); }
	bool IsProtected() { return NativeCall<bool>(this, "FWmfMediaTrack.IsProtected"); }
	void RemoveSink(const TSharedRef<IMediaSink,1> * Sink) { NativeCall<void, const TSharedRef<IMediaSink,1> *>(this, "FWmfMediaTrack.RemoveSink", Sink); }
};

