#pragma once

#include "BaseDeclarations.h"
struct FLightSceneInfoCompact
{
	char __padding[0x40L];
	FLightSceneInfo * LightSceneInfoField() { return GetNativePointerField<FLightSceneInfo *>(this, "FLightSceneInfoCompact.LightSceneInfo"); }
	__m128& BoundingSphereVectorField() { return *GetNativePointerField<__m128*>(this, "FLightSceneInfoCompact.BoundingSphereVector"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FLightSceneInfoCompact.Color"); }

	// Functions

	bool AffectsPrimitive(const FPrimitiveSceneInfoCompact * CompactPrimitiveSceneInfo) { return NativeCall<bool, const FPrimitiveSceneInfoCompact *>(this, "FLightSceneInfoCompact.AffectsPrimitive", CompactPrimitiveSceneInfo); }
	void Init(FLightSceneInfo * InLightSceneInfo) { NativeCall<void, FLightSceneInfo *>(this, "FLightSceneInfoCompact.Init", InLightSceneInfo); }
};

