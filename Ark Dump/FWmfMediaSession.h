#pragma once

#include "BaseDeclarations.h"
#include "IMFAsyncCallback.h"
#include "IUnknown.h"

struct FWmfMediaSession : IMFAsyncCallback
{
	char __padding[0x90L];
	bool& CanScrubField() { return *GetNativePointerField<bool*>(this, "FWmfMediaSession.CanScrub"); }
	unsigned int& CapabilitiesField() { return *GetNativePointerField<unsigned int*>(this, "FWmfMediaSession.Capabilities"); }
	bool& ChangeRequestedField() { return *GetNativePointerField<bool*>(this, "FWmfMediaSession.ChangeRequested"); }
	FWindowsCriticalSection& CriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FWmfMediaSession.CriticalSection"); }
	float& CurrentRateField() { return *GetNativePointerField<float*>(this, "FWmfMediaSession.CurrentRate"); }
	EMediaStates& CurrentStateField() { return *GetNativePointerField<EMediaStates*>(this, "FWmfMediaSession.CurrentState"); }
	FTimespan& DurationField() { return *GetNativePointerField<FTimespan*>(this, "FWmfMediaSession.Duration"); }
	TComPtr<IMFMediaSession>& MediaSessionField() { return *GetNativePointerField<TComPtr<IMFMediaSession>*>(this, "FWmfMediaSession.MediaSession"); }
	HRESULT& LastErrorField() { return *GetNativePointerField<HRESULT*>(this, "FWmfMediaSession.LastError"); }
	bool& LoopingField() { return *GetNativePointerField<bool*>(this, "FWmfMediaSession.Looping"); }
	TComPtr<IMFPresentationClock>& PresentationClockField() { return *GetNativePointerField<TComPtr<IMFPresentationClock>*>(this, "FWmfMediaSession.PresentationClock"); }
	TComPtr<IMFRateControl>& RateControlField() { return *GetNativePointerField<TComPtr<IMFRateControl>*>(this, "FWmfMediaSession.RateControl"); }
	TComPtr<IMFRateSupport>& RateSupportField() { return *GetNativePointerField<TComPtr<IMFRateSupport>*>(this, "FWmfMediaSession.RateSupport"); }
	int& RefCountField() { return *GetNativePointerField<int*>(this, "FWmfMediaSession.RefCount"); }
	FTimespan& RequestedPositionField() { return *GetNativePointerField<FTimespan*>(this, "FWmfMediaSession.RequestedPosition"); }
	float& RequestedRateField() { return *GetNativePointerField<float*>(this, "FWmfMediaSession.RequestedRate"); }
	EMediaStates& RequestedStateField() { return *GetNativePointerField<EMediaStates*>(this, "FWmfMediaSession.RequestedState"); }
	bool& StateChangePendingField() { return *GetNativePointerField<bool*>(this, "FWmfMediaSession.StateChangePending"); }

	// Functions

	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FWmfMediaSession.AddRef"); }
	bool ChangeState() { return NativeCall<bool>(this, "FWmfMediaSession.ChangeState"); }
	TRange<float> * GetSupportedRates(TRange<float> * result, EMediaPlaybackDirections Direction, bool Unthinned) { return NativeCall<TRange<float> *, TRange<float> *, EMediaPlaybackDirections, bool>(this, "FWmfMediaSession.GetSupportedRates", result, Direction, Unthinned); }
	HRESULT Invoke(IMFAsyncResult * AsyncResult) { return NativeCall<HRESULT, IMFAsyncResult *>(this, "FWmfMediaSession.Invoke", AsyncResult); }
	HRESULT QueryInterface(const _GUID * RefID, void ** Object) { return NativeCall<HRESULT, const _GUID *, void **>(this, "FWmfMediaSession.QueryInterface", RefID, Object); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FWmfMediaSession.Release"); }
	bool SetRate(float Rate) { return NativeCall<bool, float>(this, "FWmfMediaSession.SetRate", Rate); }
};

