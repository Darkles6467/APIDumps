#pragma once

#include "BaseDeclarations.h"
#include "UVertexAnimBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMorphTarget : UVertexAnimBase
{
	char __padding[0x10L];
	TArray<FMorphTargetLODModel>& MorphLODModelsField() { return *GetNativePointerField<TArray<FMorphTargetLODModel>*>(this, "UMorphTarget.MorphLODModels"); }

	// Functions

	FVertexAnimDelta * GetDeltasAtTime(float Time, int LODIndex, FVertexAnimEvalStateBase * State, int * OutNumDeltas) { return NativeCall<FVertexAnimDelta *, float, int, FVertexAnimEvalStateBase *, int *>(this, "UMorphTarget.GetDeltasAtTime", Time, LODIndex, State, OutNumDeltas); }
	bool HasDataForLOD(int LODIndex) { return NativeCall<bool, int>(this, "UMorphTarget.HasDataForLOD", LODIndex); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMorphTarget.Serialize", Ar); }
};

