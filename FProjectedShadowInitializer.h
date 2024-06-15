#pragma once

#include "BaseDeclarations.h"
struct FProjectedShadowInitializer
{
	char __padding[0xb0L];
	FVector& PreShadowTranslationField() { return *GetNativePointerField<FVector*>(this, "FProjectedShadowInitializer.PreShadowTranslation"); }
	FMatrix& WorldToLightField() { return *GetNativePointerField<FMatrix*>(this, "FProjectedShadowInitializer.WorldToLight"); }
	FVector& ScalesField() { return *GetNativePointerField<FVector*>(this, "FProjectedShadowInitializer.Scales"); }
	FVector& FaceDirectionField() { return *GetNativePointerField<FVector*>(this, "FProjectedShadowInitializer.FaceDirection"); }
	FBoxSphereBounds& SubjectBoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FProjectedShadowInitializer.SubjectBounds"); }
	FVector4& WAxisField() { return *GetNativePointerField<FVector4*>(this, "FProjectedShadowInitializer.WAxis"); }
	float& MinLightWField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInitializer.MinLightW"); }
	float& MaxDistanceToCastInLightWField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInitializer.MaxDistanceToCastInLightW"); }
	bool& bDirectionalLightField() { return *GetNativePointerField<bool*>(this, "FProjectedShadowInitializer.bDirectionalLight"); }
};

