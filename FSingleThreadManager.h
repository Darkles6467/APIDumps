#pragma once

#include "BaseDeclarations.h"
struct FSingleThreadManager
{
	char __padding[0x10L];
	TArray<FFakeThread *>& ThreadListField() { return *GetNativePointerField<TArray<FFakeThread *>*>(this, "FSingleThreadManager.ThreadList"); }

	// Functions

	static FSingleThreadManager * Get() { return NativeCall<FSingleThreadManager *>(nullptr, "FSingleThreadManager.Get"); }
	void Tick() { NativeCall<void>(this, "FSingleThreadManager.Tick"); }
};

