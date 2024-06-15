#pragma once

#include "BaseDeclarations.h"
struct FVertexAnimEvalStateBase
{
};

struct FVertexAnimEvalState : FVertexAnimEvalStateBase
{
	char __padding[0x8L];
	FVertexAnimDelta * DeltasField() { return GetNativePointerField<FVertexAnimDelta *>(this, "FVertexAnimEvalState.Deltas"); }
};

