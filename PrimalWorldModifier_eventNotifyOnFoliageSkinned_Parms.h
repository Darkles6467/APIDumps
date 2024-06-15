#pragma once

#include "BaseDeclarations.h"
struct PrimalWorldModifier_eventNotifyOnFoliageSkinned_Parms
{
	char __padding[0x8L];
	UHierarchicalInstancedStaticMeshComponent * FoliageInstanceField() { return GetNativePointerField<UHierarchicalInstancedStaticMeshComponent *>(this, "PrimalWorldModifier_eventNotifyOnFoliageSkinned_Parms.FoliageInstance"); }
};

