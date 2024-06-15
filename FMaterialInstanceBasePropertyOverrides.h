#pragma once

#include "BaseDeclarations.h"
struct FMaterialInstanceBasePropertyOverrides
{
	char __padding[0x10L];
	bool& bOverride_OpacityMaskClipValueField() { return *GetNativePointerField<bool*>(this, "FMaterialInstanceBasePropertyOverrides.bOverride_OpacityMaskClipValue"); }
	bool& bOverride_BlendModeField() { return *GetNativePointerField<bool*>(this, "FMaterialInstanceBasePropertyOverrides.bOverride_BlendMode"); }
	bool& bOverride_ShadingModelField() { return *GetNativePointerField<bool*>(this, "FMaterialInstanceBasePropertyOverrides.bOverride_ShadingModel"); }
	bool& bOverride_TwoSidedField() { return *GetNativePointerField<bool*>(this, "FMaterialInstanceBasePropertyOverrides.bOverride_TwoSided"); }
	float& OpacityMaskClipValueField() { return *GetNativePointerField<float*>(this, "FMaterialInstanceBasePropertyOverrides.OpacityMaskClipValue"); }
	TEnumAsByte<enum EBlendMode>& BlendModeField() { return *GetNativePointerField<TEnumAsByte<enum EBlendMode>*>(this, "FMaterialInstanceBasePropertyOverrides.BlendMode"); }
	TEnumAsByte<enum EMaterialShadingModel>& ShadingModelField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialShadingModel>*>(this, "FMaterialInstanceBasePropertyOverrides.ShadingModel"); }

	// Functions

	void UpdateHash(FSHA1 * HashState) { NativeCall<void, FSHA1 *>(this, "FMaterialInstanceBasePropertyOverrides.UpdateHash", HashState); }
};

