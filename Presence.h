#pragma once

#include "BaseDeclarations.h"
struct Presence
{
	char __padding[0x18L];
	FieldArray<_BYTE, 1> _currentStatusField() { return {this, "Presence._currentStatus"}; }
	FString& _messageField() { return *GetNativePointerField<FString*>(this, "Presence._message"); }

	// Functions

	bool operator==(const Presence * RHS) { return NativeCall<bool, const Presence *>(this, "Presence.operator==", RHS); }
};

