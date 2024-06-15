#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FParticleTileVertexBuffer : FVertexBuffer
{
	char __padding[0x10L];
	int& TileCountField() { return *GetNativePointerField<int*>(this, "FParticleTileVertexBuffer.TileCount"); }
	int& AlignedTileCountField() { return *GetNativePointerField<int*>(this, "FParticleTileVertexBuffer.AlignedTileCount"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleTileVertexBuffer.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FParticleTileVertexBuffer.ReleaseRHI"); }
};

