#pragma once

#include "BaseDeclarations.h"
struct FMaterialParameterCollectionInstanceResource
{
	char __padding[0x40L];
	FGuid& IdField() { return *GetNativePointerField<FGuid*>(this, "FMaterialParameterCollectionInstanceResource.Id"); }
};

