#pragma once

#include "BaseDeclarations.h"
struct FLightmassMaterialInterfaceSettings
{
	char __padding[0x18L];
	float& EmissiveBoostField() { return *GetNativePointerField<float*>(this, "FLightmassMaterialInterfaceSettings.EmissiveBoost"); }
	float& DiffuseBoostField() { return *GetNativePointerField<float*>(this, "FLightmassMaterialInterfaceSettings.DiffuseBoost"); }
	float& ExportResolutionScaleField() { return *GetNativePointerField<float*>(this, "FLightmassMaterialInterfaceSettings.ExportResolutionScale"); }
	float& DistanceFieldPenumbraScaleField() { return *GetNativePointerField<float*>(this, "FLightmassMaterialInterfaceSettings.DistanceFieldPenumbraScale"); }

	// Functions

};

