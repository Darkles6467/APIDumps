#pragma once

#include "BaseDeclarations.h"
struct PrimalWorldModifier_eventBPSkinFoliage_Parms
{
	char __padding[0x8L];
	UHierarchicalInstancedStaticMeshComponent * FoliageInstanceField() { return GetNativePointerField<UHierarchicalInstancedStaticMeshComponent *>(this, "PrimalWorldModifier_eventBPSkinFoliage_Parms.FoliageInstance"); }
};

