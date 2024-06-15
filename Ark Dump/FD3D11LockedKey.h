#pragma once

#include "BaseDeclarations.h"
struct FD3D11LockedKey
{
	char __padding[0x10L];
	void * SourceObjectField() { return GetNativePointerField<void *>(this, "FD3D11LockedKey.SourceObject"); }
	unsigned int& SubresourceField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11LockedKey.Subresource"); }
};

