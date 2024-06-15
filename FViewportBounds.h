#pragma once

#include "BaseDeclarations.h"
struct FViewportBounds
{
	char __padding[0x18L];
	float& TopLeftXField() { return *GetNativePointerField<float*>(this, "FViewportBounds.TopLeftX"); }
	float& TopLeftYField() { return *GetNativePointerField<float*>(this, "FViewportBounds.TopLeftY"); }
	float& WidthField() { return *GetNativePointerField<float*>(this, "FViewportBounds.Width"); }
	float& HeightField() { return *GetNativePointerField<float*>(this, "FViewportBounds.Height"); }
	float& MinDepthField() { return *GetNativePointerField<float*>(this, "FViewportBounds.MinDepth"); }
	float& MaxDepthField() { return *GetNativePointerField<float*>(this, "FViewportBounds.MaxDepth"); }
};

