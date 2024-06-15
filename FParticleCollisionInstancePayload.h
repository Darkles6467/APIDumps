#pragma once

#include "BaseDeclarations.h"
struct FParticleCollisionInstancePayload
{
	char __padding[0x4L];
	char& CurrentLODBoundsCheckCountField() { return *GetNativePointerField<char*>(this, "FParticleCollisionInstancePayload.CurrentLODBoundsCheckCount"); }
	char& Padding1Field() { return *GetNativePointerField<char*>(this, "FParticleCollisionInstancePayload.Padding1"); }
	char& Padding2Field() { return *GetNativePointerField<char*>(this, "FParticleCollisionInstancePayload.Padding2"); }
	char& Padding3Field() { return *GetNativePointerField<char*>(this, "FParticleCollisionInstancePayload.Padding3"); }
};

