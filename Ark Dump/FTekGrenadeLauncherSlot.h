#pragma once

#include "BaseDeclarations.h"
struct FTekGrenadeLauncherSlot
{
	char __padding[0x18L];
	long double& LastFireTimeField() { return *GetNativePointerField<long double*>(this, "FTekGrenadeLauncherSlot.LastFireTime"); }
	bool& bIsLoadedField() { return *GetNativePointerField<bool*>(this, "FTekGrenadeLauncherSlot.bIsLoaded"); }

	// Functions

};

