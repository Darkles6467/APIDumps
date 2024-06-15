#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FCaptureRenderTarget : FRenderResource
{
	char __padding[0x18L];
	int& SizeField() { return *GetNativePointerField<int*>(this, "FCaptureRenderTarget.Size"); }

	// Functions

	FIntPoint * GetSizeXY(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FCaptureRenderTarget.GetSizeXY", result); }
};

