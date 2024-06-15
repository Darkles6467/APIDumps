#pragma once

#include "BaseDeclarations.h"
struct FDeferredUpdateResource
{
	char __padding[0x28L];
	TLinkedList<FDeferredUpdateResource *>& UpdateListLinkField() { return *GetNativePointerField<TLinkedList<FDeferredUpdateResource *>*>(this, "FDeferredUpdateResource.UpdateListLink"); }
	bool& bOnlyUpdateOnceField() { return *GetNativePointerField<bool*>(this, "FDeferredUpdateResource.bOnlyUpdateOnce"); }

	// Functions

	void AddToDeferredUpdateList(bool OnlyUpdateOnce) { NativeCall<void, bool>(this, "FDeferredUpdateResource.AddToDeferredUpdateList", OnlyUpdateOnce); }
	void RemoveFromDeferredUpdateList() { NativeCall<void>(this, "FDeferredUpdateResource.RemoveFromDeferredUpdateList"); }
};

