#pragma once

#include "BaseDeclarations.h"
struct FSkelMeshComponentLODInfo
{
	char __padding[0x10L];
	TArray<bool>& HiddenMaterialsField() { return *GetNativePointerField<TArray<bool>*>(this, "FSkelMeshComponentLODInfo.HiddenMaterials"); }

	// Functions

};

