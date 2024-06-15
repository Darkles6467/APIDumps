#pragma once

#include "BaseDeclarations.h"
struct FOverrideAnimBlueprintEntry
{
	char __padding[0x10L];
	UAnimBlueprintGeneratedClass * FromBPClassField() { return GetNativePointerField<UAnimBlueprintGeneratedClass *>(this, "FOverrideAnimBlueprintEntry.FromBPClass"); }
	UAnimBlueprintGeneratedClass * ToBPClassField() { return GetNativePointerField<UAnimBlueprintGeneratedClass *>(this, "FOverrideAnimBlueprintEntry.ToBPClass"); }

	// Functions

};

