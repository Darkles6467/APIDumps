#pragma once

#include "BaseDeclarations.h"
struct FLightPrimitiveInteraction
{
	char __padding[0x40L];
	int& LightIdField() { return *GetNativePointerField<int*>(this, "FLightPrimitiveInteraction.LightId"); }
	FLightSceneInfo * LightSceneInfoField() { return GetNativePointerField<FLightSceneInfo *>(this, "FLightPrimitiveInteraction.LightSceneInfo"); }
	FPrimitiveSceneInfo * PrimitiveSceneInfoField() { return GetNativePointerField<FPrimitiveSceneInfo *>(this, "FLightPrimitiveInteraction.PrimitiveSceneInfo"); }
	FLightPrimitiveInteraction ** PrevPrimitiveLinkField() { return GetNativePointerField<FLightPrimitiveInteraction **>(this, "FLightPrimitiveInteraction.PrevPrimitiveLink"); }
	FLightPrimitiveInteraction * NextPrimitiveField() { return GetNativePointerField<FLightPrimitiveInteraction *>(this, "FLightPrimitiveInteraction.NextPrimitive"); }
	FLightPrimitiveInteraction ** PrevLightLinkField() { return GetNativePointerField<FLightPrimitiveInteraction **>(this, "FLightPrimitiveInteraction.PrevLightLink"); }
	FLightPrimitiveInteraction * NextLightField() { return GetNativePointerField<FLightPrimitiveInteraction *>(this, "FLightPrimitiveInteraction.NextLight"); }

	// Functions

};

