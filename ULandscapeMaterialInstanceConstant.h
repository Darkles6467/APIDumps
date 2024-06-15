#pragma once

#include "BaseDeclarations.h"
#include "UMaterialInstance.h"
#include "UMaterialInterface.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialInstanceConstant : UMaterialInstance
{

	// Functions

};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
{
	char __padding[0x10L];
	int& DataWeightmapIndexField() { return *GetNativePointerField<int*>(this, "ULandscapeMaterialInstanceConstant.DataWeightmapIndex"); }
	int& DataWeightmapSizeField() { return *GetNativePointerField<int*>(this, "ULandscapeMaterialInstanceConstant.DataWeightmapSize"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "ULandscapeMaterialInstanceConstant.PostLoad"); }
};

