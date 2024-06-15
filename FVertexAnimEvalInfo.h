#pragma once

#include "BaseDeclarations.h"
struct FVertexAnimEvalInfo
{
	char __padding[0x30L];
	FActiveVertexAnim& ActiveVertexAnimField() { return *GetNativePointerField<FActiveVertexAnim*>(this, "FVertexAnimEvalInfo.ActiveVertexAnim"); }
	int& NextDeltaIndexField() { return *GetNativePointerField<int*>(this, "FVertexAnimEvalInfo.NextDeltaIndex"); }
	FVertexAnimDelta * DeltasField() { return GetNativePointerField<FVertexAnimDelta *>(this, "FVertexAnimEvalInfo.Deltas"); }
	int& NumDeltasField() { return *GetNativePointerField<int*>(this, "FVertexAnimEvalInfo.NumDeltas"); }
};

