#pragma once

#include "BaseDeclarations.h"
struct FPhysicalSurfaceName
{
	char __padding[0xcL];
	TEnumAsByte<enum EPhysicalSurface>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum EPhysicalSurface>*>(this, "FPhysicalSurfaceName.Type"); }
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FPhysicalSurfaceName.Name"); }

	// Functions

};

