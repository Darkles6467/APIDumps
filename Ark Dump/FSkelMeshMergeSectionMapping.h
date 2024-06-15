#pragma once

#include "BaseDeclarations.h"
struct FSkelMeshMergeSectionMapping
{
	char __padding[0x10L];
	TArray<int>& SectionIDsField() { return *GetNativePointerField<TArray<int>*>(this, "FSkelMeshMergeSectionMapping.SectionIDs"); }
};

