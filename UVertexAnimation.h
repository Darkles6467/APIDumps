#pragma once

#include "BaseDeclarations.h"
#include "UVertexAnimBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UVertexAnimation : UVertexAnimBase
{
	char __padding[0x18L];
	int& NumAnimatedVertsField() { return *GetNativePointerField<int*>(this, "UVertexAnimation.NumAnimatedVerts"); }
	TArray<FVertexAnimFrame>& VertexAnimDataField() { return *GetNativePointerField<TArray<FVertexAnimFrame>*>(this, "UVertexAnimation.VertexAnimData"); }

	// Functions

	FVertexAnimDelta * GetDeltasAtTime(float Time, int LODIndex, FVertexAnimEvalStateBase * State, int * OutNumDeltas) { return NativeCall<FVertexAnimDelta *, float, int, FVertexAnimEvalStateBase *, int *>(this, "UVertexAnimation.GetDeltasAtTime", Time, LODIndex, State, OutNumDeltas); }
	void TermEval(FVertexAnimEvalStateBase * State) { NativeCall<void, FVertexAnimEvalStateBase *>(this, "UVertexAnimation.TermEval", State); }
};

