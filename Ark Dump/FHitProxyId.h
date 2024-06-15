#pragma once

#include "BaseDeclarations.h"
struct FHitProxyId
{
	char __padding[0x4L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FHitProxyId.Index"); }

	// Functions

	FColor * GetColor(FColor * result) { return NativeCall<FColor *, FColor *>(this, "FHitProxyId.GetColor", result); }
};

