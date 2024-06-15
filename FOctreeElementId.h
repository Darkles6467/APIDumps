#pragma once

#include "BaseDeclarations.h"
struct FOctreeElementId
{
	char __padding[0x10L];
	const void * NodeField() { return GetNativePointerField<const void *>(this, "FOctreeElementId.Node"); }
	int& ElementIndexField() { return *GetNativePointerField<int*>(this, "FOctreeElementId.ElementIndex"); }

	// Functions

	bool IsValidId() { return NativeCall<bool>(this, "FOctreeElementId.IsValidId"); }
};

