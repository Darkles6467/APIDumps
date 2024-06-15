#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveMaterialRef
{
	char __padding[0x18L];
	UDecalComponent * DecalField() { return GetNativePointerField<UDecalComponent *>(this, "FPrimitiveMaterialRef.Decal"); }
	int& ElementIndexField() { return *GetNativePointerField<int*>(this, "FPrimitiveMaterialRef.ElementIndex"); }

	// Functions

};

