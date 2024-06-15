#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULightmappedSurfaceCollection : UObject
{
	char __padding[0x18L];
	UModel * SourceModelField() { return GetNativePointerField<UModel *>(this, "ULightmappedSurfaceCollection.SourceModel"); }
	TArray<int>& SurfacesField() { return *GetNativePointerField<TArray<int>*>(this, "ULightmappedSurfaceCollection.Surfaces"); }

	// Functions

};

