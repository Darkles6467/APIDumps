#pragma once

#include "BaseDeclarations.h"
#include "FRenderTarget.h"

struct FStubRenderTarget : FRenderTarget
{
	char __padding[0x8L];
	FIntPoint& SizeXYField() { return *GetNativePointerField<FIntPoint*>(this, "FStubRenderTarget.SizeXY"); }
};

