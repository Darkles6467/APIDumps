#pragma once

#include "BaseDeclarations.h"
struct FModuleLocationBoneSocketParticlePayload
{
	char __padding[0x4L];
	int& SourceIndexField() { return *GetNativePointerField<int*>(this, "FModuleLocationBoneSocketParticlePayload.SourceIndex"); }
};

