#pragma once

#include "BaseDeclarations.h"
struct FFoliageElementParams
{
	char __padding[0x38L];
	FieldArray<const FInstancingUserData *, 2> PassUserDataField() { return {this, "FFoliageElementParams.PassUserData"}; }
	int& NumSelectionGroupsField() { return *GetNativePointerField<int*>(this, "FFoliageElementParams.NumSelectionGroups"); }
	int& ViewIndexField() { return *GetNativePointerField<int*>(this, "FFoliageElementParams.ViewIndex"); }
	bool& bSelectionRenderEnabledField() { return *GetNativePointerField<bool*>(this, "FFoliageElementParams.bSelectionRenderEnabled"); }
	FieldArray<bool, 2> BatchRenderSelectionField() { return {this, "FFoliageElementParams.BatchRenderSelection"}; }
	bool& bIsWireframeField() { return *GetNativePointerField<bool*>(this, "FFoliageElementParams.bIsWireframe"); }
	bool& bUseHoveredMaterialField() { return *GetNativePointerField<bool*>(this, "FFoliageElementParams.bUseHoveredMaterial"); }
	bool& bInstancedField() { return *GetNativePointerField<bool*>(this, "FFoliageElementParams.bInstanced"); }
	bool& bBlendLODsField() { return *GetNativePointerField<bool*>(this, "FFoliageElementParams.bBlendLODs"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FFoliageElementParams.FeatureLevel"); }
	bool& ShadowFrustumField() { return *GetNativePointerField<bool*>(this, "FFoliageElementParams.ShadowFrustum"); }
	float& FinalCullDistanceField() { return *GetNativePointerField<float*>(this, "FFoliageElementParams.FinalCullDistance"); }
};

