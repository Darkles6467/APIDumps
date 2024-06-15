#pragma once

#include "BaseDeclarations.h"
struct FGraphReference
{
	char __padding[0x20L];
	UEdGraph * MacroGraphField() { return GetNativePointerField<UEdGraph *>(this, "FGraphReference.MacroGraph"); }
	FGuid& GraphGuidField() { return *GetNativePointerField<FGuid*>(this, "FGraphReference.GraphGuid"); }

	// Functions

};

