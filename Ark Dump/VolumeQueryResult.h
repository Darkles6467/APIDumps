#pragma once

#include "BaseDeclarations.h"
struct VolumeQueryResult
{
	char __padding[0x20L];
	FieldArray<float, 3> pos_mField() { return {this, "VolumeQueryResult.pos_m"}; }
	int& validField() { return *GetNativePointerField<int*>(this, "VolumeQueryResult.valid"); }
	float& densityField() { return *GetNativePointerField<float*>(this, "VolumeQueryResult.density"); }
	float& direct_lightField() { return *GetNativePointerField<float*>(this, "VolumeQueryResult.direct_light"); }
	float& indirect_lightField() { return *GetNativePointerField<float*>(this, "VolumeQueryResult.indirect_light"); }
	float& ambient_lightField() { return *GetNativePointerField<float*>(this, "VolumeQueryResult.ambient_light"); }
};

