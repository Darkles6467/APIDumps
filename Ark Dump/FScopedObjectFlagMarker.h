#pragma once

#include "BaseDeclarations.h"
struct FScopedObjectFlagMarker
{
	char __padding[0x50L];

	// Functions

	void RestoreObjectFlags() { NativeCall<void>(this, "FScopedObjectFlagMarker.RestoreObjectFlags"); }
	void SaveObjectFlags() { NativeCall<void>(this, "FScopedObjectFlagMarker.SaveObjectFlags"); }
};

