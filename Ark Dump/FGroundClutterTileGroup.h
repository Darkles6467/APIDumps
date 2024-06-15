#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FGroundClutterTileGroup : FRenderResource
{
	char __padding[0x80L];
	int& MaxOutputElementCountField() { return *GetNativePointerField<int*>(this, "FGroundClutterTileGroup.MaxOutputElementCount"); }
	int& MaxTileCountField() { return *GetNativePointerField<int*>(this, "FGroundClutterTileGroup.MaxTileCount"); }
	FRWBuffer& ClutterOutputBufferField() { return *GetNativePointerField<FRWBuffer*>(this, "FGroundClutterTileGroup.ClutterOutputBuffer"); }
	FRWBuffer& ClutterInfoOutputBufferField() { return *GetNativePointerField<FRWBuffer*>(this, "FGroundClutterTileGroup.ClutterInfoOutputBuffer"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FGroundClutterTileGroup.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FGroundClutterTileGroup.ReleaseRHI"); }
};

