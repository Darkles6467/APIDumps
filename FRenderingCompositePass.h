#pragma once

#include "BaseDeclarations.h"
struct FRenderingCompositePass
{
	char __padding[0x10L];
	bool& bGraphMarkerField() { return *GetNativePointerField<bool*>(this, "FRenderingCompositePass.bGraphMarker"); }

	// Functions

	const FPooledRenderTargetDesc * GetInputDesc(EPassInputId InPassInputId) { return NativeCall<const FPooledRenderTargetDesc *, EPassInputId>(this, "FRenderingCompositePass.GetInputDesc", InPassInputId); }
};

