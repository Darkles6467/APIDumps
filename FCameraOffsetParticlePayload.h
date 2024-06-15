#pragma once

#include "BaseDeclarations.h"
struct FCameraOffsetParticlePayload
{
	char __padding[0x8L];
	float& BaseOffsetField() { return *GetNativePointerField<float*>(this, "FCameraOffsetParticlePayload.BaseOffset"); }
	float& OffsetField() { return *GetNativePointerField<float*>(this, "FCameraOffsetParticlePayload.Offset"); }
};

