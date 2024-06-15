#pragma once

#include "BaseDeclarations.h"
struct FRenderQueryPool
{
	char __padding[0x20L];
	ERenderQueryType& QueryTypeField() { return *GetNativePointerField<ERenderQueryType*>(this, "FRenderQueryPool.QueryType"); }

	// Functions

	void Release() { NativeCall<void>(this, "FRenderQueryPool.Release"); }
};

