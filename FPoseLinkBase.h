#pragma once

#include "BaseDeclarations.h"
struct FPoseLinkBase
{
	char __padding[0x18L];
	int& LinkIDField() { return *GetNativePointerField<int*>(this, "FPoseLinkBase.LinkID"); }
	bool& bProcessedField() { return *GetNativePointerField<bool*>(this, "FPoseLinkBase.bProcessed"); }

	// Functions

	void AttemptRelink(const FAnimationBaseContext * Context) { NativeCall<void, const FAnimationBaseContext *>(this, "FPoseLinkBase.AttemptRelink", Context); }
	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FPoseLinkBase.CacheBones", Context); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FPoseLinkBase.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FPoseLinkBase.Initialize", Context); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FPoseLinkBase.Update", Context); }
};

