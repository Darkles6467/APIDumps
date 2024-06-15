#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FLandscapeVertexBufferMobile : FVertexBuffer
{
	char __padding[0x10L];
	const void * DataField() { return GetNativePointerField<const void *>(this, "FLandscapeVertexBufferMobile.Data"); }
	int& DataSizeField() { return *GetNativePointerField<int*>(this, "FLandscapeVertexBufferMobile.DataSize"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FLandscapeVertexBufferMobile.InitRHI"); }
};

