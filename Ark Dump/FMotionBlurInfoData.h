#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveComponentId.h"

struct FMotionBlurInfoData
{
	char __padding[0x58L];
	unsigned int& CacheUpdateCountField() { return *GetNativePointerField<unsigned int*>(this, "FMotionBlurInfoData.CacheUpdateCount"); }
	bool& bShouldClearMotionBlurInfoField() { return *GetNativePointerField<bool*>(this, "FMotionBlurInfoData.bShouldClearMotionBlurInfo"); }

	// Functions

	FMotionBlurInfo * FindMBInfoIndex(FPrimitiveComponentId ComponentId) { return NativeCall<FMotionBlurInfo *, FPrimitiveComponentId>(this, "FMotionBlurInfoData.FindMBInfoIndex", ComponentId); }
	bool GetPrimitiveMotionBlurInfo(const FPrimitiveSceneInfo * PrimitiveSceneInfo, FMatrix * OutPreviousLocalToWorld) { return NativeCall<bool, const FPrimitiveSceneInfo *, FMatrix *>(this, "FMotionBlurInfoData.GetPrimitiveMotionBlurInfo", PrimitiveSceneInfo, OutPreviousLocalToWorld); }
	void RestoreForPausedMotionBlur() { NativeCall<void>(this, "FMotionBlurInfoData.RestoreForPausedMotionBlur"); }
	void UpdateMotionBlurCache(FScene * InScene) { NativeCall<void, FScene *>(this, "FMotionBlurInfoData.UpdateMotionBlurCache", InScene); }
};

