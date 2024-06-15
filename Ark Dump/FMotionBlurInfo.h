#pragma once

#include "BaseDeclarations.h"
struct FMotionBlurInfo
{
	char __padding[0xa0L];
	FPrimitiveComponentId& ComponentIdField() { return *GetNativePointerField<FPrimitiveComponentId*>(this, "FMotionBlurInfo.ComponentId"); }
	FPrimitiveSceneInfo * MBPrimitiveSceneInfoField() { return GetNativePointerField<FPrimitiveSceneInfo *>(this, "FMotionBlurInfo.MBPrimitiveSceneInfo"); }
	FMatrix& PreviousLocalToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FMotionBlurInfo.PreviousLocalToWorld"); }
	FMatrix& PausedLocalToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FMotionBlurInfo.PausedLocalToWorld"); }
	bool& bKeepAndUpdateThisFrameField() { return *GetNativePointerField<bool*>(this, "FMotionBlurInfo.bKeepAndUpdateThisFrame"); }

	// Functions

	void UpdateMotionBlurInfo() { NativeCall<void>(this, "FMotionBlurInfo.UpdateMotionBlurInfo"); }
};

