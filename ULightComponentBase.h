#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"

struct ULightComponentBase : USceneComponent
{
	char __padding[0x30L];
	FieldArray<_BYTE, 8> LightGuidField() { return {this, "ULightComponentBase.LightGuid"}; }
	float& Brightness_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.Brightness_DEPRECATED"); }
	float& IntensityField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.Intensity"); }
	FColor& LightColorField() { return *GetNativePointerField<FColor*>(this, "ULightComponentBase.LightColor"); }
	float& ExtraIntensityField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.ExtraIntensity"); }
	float& ShadowDiscardDynamicObjectsDistanceField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.ShadowDiscardDynamicObjectsDistance"); }
	float& ShadowTexelSizeMultiplierField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.ShadowTexelSizeMultiplier"); }
	int& ObjectLayerMaskField() { return *GetNativePointerField<int*>(this, "ULightComponentBase.ObjectLayerMask"); }
	float& IndirectLightingIntensityField() { return *GetNativePointerField<float*>(this, "ULightComponentBase.IndirectLightingIntensity"); }

	// Functions

	FBoxSphereBounds * GetPlacementExtent(FBoxSphereBounds * result) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *>(this, "ULightComponentBase.GetPlacementExtent", result); }
	bool HasStaticLighting() { return NativeCall<bool>(this, "ULightComponentBase.HasStaticLighting"); }
	void OnRegister() { NativeCall<void>(this, "ULightComponentBase.OnRegister"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "ULightComponentBase.PostDuplicate", bDuplicateForPIE); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULightComponentBase.Serialize", Ar); }
	bool ShouldComponentAddToScene() { return NativeCall<bool>(this, "ULightComponentBase.ShouldComponentAddToScene"); }
	void UpdateLightGUIDs() { NativeCall<void>(this, "ULightComponentBase.UpdateLightGUIDs"); }
};

