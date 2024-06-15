#pragma once

#include "BaseDeclarations.h"
struct FBossEngramsSoftReferenceMapping
{
	char __padding[0x10L];
	TArray<FEngramsSetSoftReferenceMapping>& EngramSetsField() { return *GetNativePointerField<TArray<FEngramsSetSoftReferenceMapping>*>(this, "FBossEngramsSoftReferenceMapping.EngramSets"); }

	// Functions

};

