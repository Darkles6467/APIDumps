#pragma once

#include "BaseDeclarations.h"
struct FSublevelOverrideDefinition
{
	char __padding[0x10L];
	FName& SublevelPackageToReplaceField() { return *GetNativePointerField<FName*>(this, "FSublevelOverrideDefinition.SublevelPackageToReplace"); }
	FName& SublevelPackageToActivateField() { return *GetNativePointerField<FName*>(this, "FSublevelOverrideDefinition.SublevelPackageToActivate"); }

	// Functions

};

