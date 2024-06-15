#pragma once

#include "BaseDeclarations.h"
struct IAudioDevice
{
	char __padding[0x8L];
};

struct AudioDeviceImpl : IAudioDevice
{
	char __padding[0x28L];
	FString& _nameField() { return *GetNativePointerField<FString*>(this, "AudioDeviceImpl._name"); }
	FString& _idField() { return *GetNativePointerField<FString*>(this, "AudioDeviceImpl._id"); }
	FieldArray<_BYTE, 1> _typeField() { return {this, "AudioDeviceImpl._type"}; }

	// Functions

	bool IsEmpty() { return NativeCall<bool>(this, "AudioDeviceImpl.IsEmpty"); }
};

