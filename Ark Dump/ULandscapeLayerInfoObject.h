#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULandscapeLayerInfoObject : UObject
{
	char __padding[0x30L];
	int& LandscapeInfoIDField() { return *GetNativePointerField<int*>(this, "ULandscapeLayerInfoObject.LandscapeInfoID"); }
	FName& LayerNameField() { return *GetNativePointerField<FName*>(this, "ULandscapeLayerInfoObject.LayerName"); }
	UPhysicalMaterial * PhysMaterialField() { return GetNativePointerField<UPhysicalMaterial *>(this, "ULandscapeLayerInfoObject.PhysMaterial"); }
	float& HardnessField() { return *GetNativePointerField<float*>(this, "ULandscapeLayerInfoObject.Hardness"); }
	FLinearColor& LayerUsageDebugColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULandscapeLayerInfoObject.LayerUsageDebugColor"); }

	// Functions

};

