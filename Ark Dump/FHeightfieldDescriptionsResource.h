#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FHeightfieldDescriptionsResource : FRenderResource
{
	char __padding[0x20L];
	FCPUUpdatedBuffer& DataField() { return *GetNativePointerField<FCPUUpdatedBuffer*>(this, "FHeightfieldDescriptionsResource.Data"); }
};

