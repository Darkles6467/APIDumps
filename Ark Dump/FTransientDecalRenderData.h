#pragma once

#include "BaseDeclarations.h"
struct FTransientDecalRenderData
{
	char __padding[0x28L];
	EDecalBlendMode& DecalBlendModeField() { return *GetNativePointerField<EDecalBlendMode*>(this, "FTransientDecalRenderData.DecalBlendMode"); }
	const FDeferredDecalProxy * DecalProxyField() { return GetNativePointerField<const FDeferredDecalProxy *>(this, "FTransientDecalRenderData.DecalProxy"); }
	bool& bHasNormalField() { return *GetNativePointerField<bool*>(this, "FTransientDecalRenderData.bHasNormal"); }

	// Functions

};

