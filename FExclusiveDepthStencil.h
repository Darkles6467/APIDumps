#pragma once

#include "BaseDeclarations.h"
struct FExclusiveDepthStencil
{
	enum Type
	{
		DepthNop = 0x0,
		DepthRead = 0x1,
		DepthWrite = 0x2,
		DepthMask = 0xf,
	};

	char __padding[0x4L];
	FExclusiveDepthStencil::Type& ValueField() { return *GetNativePointerField<FExclusiveDepthStencil::Type*>(this, "FExclusiveDepthStencil.Value"); }
};

