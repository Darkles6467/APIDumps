#pragma once

#include "BaseDeclarations.h"
struct FLightmassPrimitiveSettings
{
	char __padding[0x18L];
	float& EmissiveLightFalloffExponentField() { return *GetNativePointerField<float*>(this, "FLightmassPrimitiveSettings.EmissiveLightFalloffExponent"); }
	float& EmissiveLightExplicitInfluenceRadiusField() { return *GetNativePointerField<float*>(this, "FLightmassPrimitiveSettings.EmissiveLightExplicitInfluenceRadius"); }
	float& EmissiveBoostField() { return *GetNativePointerField<float*>(this, "FLightmassPrimitiveSettings.EmissiveBoost"); }
	float& DiffuseBoostField() { return *GetNativePointerField<float*>(this, "FLightmassPrimitiveSettings.DiffuseBoost"); }
	float& FullyOccludedSamplesFractionField() { return *GetNativePointerField<float*>(this, "FLightmassPrimitiveSettings.FullyOccludedSamplesFraction"); }

	// Functions

};

