#pragma once

#include "BaseDeclarations.h"
struct FNetDriverDefinition
{
	char __padding[0x20L];
	FName& DefNameField() { return *GetNativePointerField<FName*>(this, "FNetDriverDefinition.DefName"); }
	FName& DriverClassNameField() { return *GetNativePointerField<FName*>(this, "FNetDriverDefinition.DriverClassName"); }
	FName& DriverClassNameFallbackField() { return *GetNativePointerField<FName*>(this, "FNetDriverDefinition.DriverClassNameFallback"); }
	FName& DriverClassNameFallback2Field() { return *GetNativePointerField<FName*>(this, "FNetDriverDefinition.DriverClassNameFallback2"); }

	// Functions

};

