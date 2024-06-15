#pragma once

#include "BaseDeclarations.h"
#include "FComponentInstanceDataBase.h"

struct FPrecomputedLightInstanceData : FComponentInstanceDataBase
{
	char __padding[0x58L];
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "FPrecomputedLightInstanceData.Transform"); }
	FGuid& LightGuidField() { return *GetNativePointerField<FGuid*>(this, "FPrecomputedLightInstanceData.LightGuid"); }
	int& ShadowMapChannelField() { return *GetNativePointerField<int*>(this, "FPrecomputedLightInstanceData.ShadowMapChannel"); }
	int& PreviewShadowMapChannelField() { return *GetNativePointerField<int*>(this, "FPrecomputedLightInstanceData.PreviewShadowMapChannel"); }
	bool& bPrecomputedLightingIsValidField() { return *GetNativePointerField<bool*>(this, "FPrecomputedLightInstanceData.bPrecomputedLightingIsValid"); }

	// Functions

	bool MatchesComponent(const UActorComponent * Component) { return NativeCall<bool, const UActorComponent *>(this, "FPrecomputedLightInstanceData.MatchesComponent", Component); }
};

