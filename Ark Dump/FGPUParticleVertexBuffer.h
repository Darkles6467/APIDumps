#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FParticleIndicesVertexBuffer : FVertexBuffer
{
	char __padding[0x8L];

	// Functions

	void ReleaseRHI() { NativeCall<void>(this, "FParticleIndicesVertexBuffer.ReleaseRHI"); }
};

struct FGPUParticleVertexBuffer : FParticleIndicesVertexBuffer
{
	char __padding[0x8L];
	int& ParticleCountField() { return *GetNativePointerField<int*>(this, "FGPUParticleVertexBuffer.ParticleCount"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FGPUParticleVertexBuffer.InitRHI"); }
};

