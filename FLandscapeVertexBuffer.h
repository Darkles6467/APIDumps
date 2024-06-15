#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FLandscapeVertexBuffer : FVertexBuffer
{
	char __padding[0x8L];
	int& SubsectionSizeVertsField() { return *GetNativePointerField<int*>(this, "FLandscapeVertexBuffer.SubsectionSizeVerts"); }
	int& NumSubsectionsField() { return *GetNativePointerField<int*>(this, "FLandscapeVertexBuffer.NumSubsections"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FLandscapeVertexBuffer.InitRHI"); }
};

