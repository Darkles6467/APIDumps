#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UVertexAnimBase : UObject
{
	char __padding[0x8L];

	// Functions

	FVertexAnimDelta * GetDeltasAtTime(float Time, int LODIndex, FVertexAnimEvalStateBase * State, int * OutNumDeltas) { return NativeCall<FVertexAnimDelta *, float, int, FVertexAnimEvalStateBase *, int *>(this, "UVertexAnimBase.GetDeltasAtTime", Time, LODIndex, State, OutNumDeltas); }
};

