#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FDistanceFieldUploadDataResource : FRenderResource
{
	char __padding[0x20L];
	FCPUUpdatedBuffer& UploadDataField() { return *GetNativePointerField<FCPUUpdatedBuffer*>(this, "FDistanceFieldUploadDataResource.UploadData"); }
};

