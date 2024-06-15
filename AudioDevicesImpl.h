#pragma once

#include "BaseDeclarations.h"
struct IAudioDevices
{
	char __padding[0x68L];
};

struct AudioDevicesImpl : IAudioDevices
{
	char __padding[0x108L];
	AudioDeviceImpl& _noDeviceField() { return *GetNativePointerField<AudioDeviceImpl*>(this, "AudioDevicesImpl._noDevice"); }
	AudioDeviceImpl& _systemDeviceField() { return *GetNativePointerField<AudioDeviceImpl*>(this, "AudioDevicesImpl._systemDevice"); }
	AudioDeviceImpl& _communicationDeviceField() { return *GetNativePointerField<AudioDeviceImpl*>(this, "AudioDevicesImpl._communicationDevice"); }
	FString& _activeDeviceIdField() { return *GetNativePointerField<FString*>(this, "AudioDevicesImpl._activeDeviceId"); }
	FString& _effectiveDeviceIdField() { return *GetNativePointerField<FString*>(this, "AudioDevicesImpl._effectiveDeviceId"); }
	int& _volumeAdjustmentField() { return *GetNativePointerField<int*>(this, "AudioDevicesImpl._volumeAdjustment"); }
	bool& _mutedField() { return *GetNativePointerField<bool*>(this, "AudioDevicesImpl._muted"); }
	FieldArray<_BYTE, 1> _typeField() { return {this, "AudioDevicesImpl._type"}; }

	// Functions

	void Handle(const vx_resp_aux_get_capture_devices * r) { NativeCall<void, const vx_resp_aux_get_capture_devices *>(this, "AudioDevicesImpl.Handle", r); }
	void Handle(const vx_resp_aux_get_render_devices * r) { NativeCall<void, const vx_resp_aux_get_render_devices *>(this, "AudioDevicesImpl.Handle", r); }
	void Initialize() { NativeCall<void>(this, "AudioDevicesImpl.Initialize"); }
	bool Muted() { return NativeCall<bool>(this, "AudioDevicesImpl.Muted"); }
	void Refresh() { NativeCall<void>(this, "AudioDevicesImpl.Refresh"); }
	void SetMuted(bool value) { NativeCall<void, bool>(this, "AudioDevicesImpl.SetMuted", value); }
	int SetVolumeAdjustment(int value) { return NativeCall<int, int>(this, "AudioDevicesImpl.SetVolumeAdjustment", value); }
};

