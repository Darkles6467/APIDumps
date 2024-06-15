#pragma once

#include "BaseDeclarations.h"
struct FObjectListItem
{
	char __padding[0x38L];
	FObjectInfo& ObjectInfoField() { return *GetNativePointerField<FObjectInfo*>(this, "FObjectListItem.ObjectInfo"); }
	float& ProbabilityField() { return *GetNativePointerField<float*>(this, "FObjectListItem.Probability"); }
	PGFixed& FPProbabilityField() { return *GetNativePointerField<PGFixed*>(this, "FObjectListItem.FPProbability"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FObjectListItem.Serialize", Ar); }
};

