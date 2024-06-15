#pragma once

#include "BaseDeclarations.h"
struct FZoneProperties
{
	char __padding[0x20L];
	float& LastRenderTimeField() { return *GetNativePointerField<float*>(this, "FZoneProperties.LastRenderTime"); }
	FZoneSet& ConnectivityField() { return *GetNativePointerField<FZoneSet*>(this, "FZoneProperties.Connectivity"); }
	FZoneSet& VisibilityField() { return *GetNativePointerField<FZoneSet*>(this, "FZoneProperties.Visibility"); }
};

