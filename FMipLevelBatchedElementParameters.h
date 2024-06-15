#pragma once

#include "BaseDeclarations.h"
#include "FBatchedElementParameters.h"
#include "FRefCountedObject.h"

struct FMipLevelBatchedElementParameters : FBatchedElementParameters
{
	char __padding[0x8L];
	bool& bHDROutputField() { return *GetNativePointerField<bool*>(this, "FMipLevelBatchedElementParameters.bHDROutput"); }
	float& MipLevelField() { return *GetNativePointerField<float*>(this, "FMipLevelBatchedElementParameters.MipLevel"); }
};

