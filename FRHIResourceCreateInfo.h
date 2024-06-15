#pragma once

#include "BaseDeclarations.h"
struct FRHIResourceCreateInfo
{
	char __padding[0x28L];
	FResourceArrayInterface * ResourceArrayField() { return GetNativePointerField<FResourceArrayInterface *>(this, "FRHIResourceCreateInfo.ResourceArray"); }
	FClearValueBinding& ClearValueBindingField() { return *GetNativePointerField<FClearValueBinding*>(this, "FRHIResourceCreateInfo.ClearValueBinding"); }

	// Functions

};

