#pragma once

#include "BaseDeclarations.h"
struct FMaterialParameterCollectionInfo
{
	char __padding[0x18L];
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "FMaterialParameterCollectionInfo.StateId"); }
	UMaterialParameterCollection * ParameterCollectionField() { return GetNativePointerField<UMaterialParameterCollection *>(this, "FMaterialParameterCollectionInfo.ParameterCollection"); }

	// Functions

};

