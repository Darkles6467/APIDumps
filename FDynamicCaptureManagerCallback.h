#pragma once

#include "BaseDeclarations.h"
struct FDynamicCaptureManagerCallback
{
	char __padding[0x18L];
	FStringAssetReference& RequestField() { return *GetNativePointerField<FStringAssetReference*>(this, "FDynamicCaptureManagerCallback.Request"); }
	ADynamicCaptureManager * ManagerField() { return GetNativePointerField<ADynamicCaptureManager *>(this, "FDynamicCaptureManagerCallback.Manager"); }
};

