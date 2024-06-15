#pragma once

#include "BaseDeclarations.h"
struct FItemToDisplayInStructureTooltip
{
	char __padding[0x20L];
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FItemToDisplayInStructureTooltip.Quantity"); }
	FString& ModuleGroupHeaderField() { return *GetNativePointerField<FString*>(this, "FItemToDisplayInStructureTooltip.ModuleGroupHeader"); }

	// Functions

	FItemToDisplayInStructureTooltip * operator=(const FItemToDisplayInStructureTooltip * __that) { return NativeCall<FItemToDisplayInStructureTooltip *, const FItemToDisplayInStructureTooltip *>(this, "FItemToDisplayInStructureTooltip.operator=", __that); }
};

