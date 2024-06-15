#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FCircleVertexBuffer : FVertexBuffer
{
	char __padding[0x8L];
	int& NumSectionsField() { return *GetNativePointerField<int*>(this, "FCircleVertexBuffer.NumSections"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FCircleVertexBuffer.InitRHI"); }
};

