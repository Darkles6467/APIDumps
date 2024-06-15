#pragma once

#include "BaseDeclarations.h"
struct FModuleLocationVertSurfaceParticlePayload
{
	char __padding[0x4L];
	int& SourceIndexField() { return *GetNativePointerField<int*>(this, "FModuleLocationVertSurfaceParticlePayload.SourceIndex"); }
};

