#pragma once

#include "BaseDeclarations.h"
struct FPerPlayerSplitscreenData
{
	char __padding[0x10L];
	float& SizeXField() { return *GetNativePointerField<float*>(this, "FPerPlayerSplitscreenData.SizeX"); }
	float& SizeYField() { return *GetNativePointerField<float*>(this, "FPerPlayerSplitscreenData.SizeY"); }
	float& OriginXField() { return *GetNativePointerField<float*>(this, "FPerPlayerSplitscreenData.OriginX"); }
	float& OriginYField() { return *GetNativePointerField<float*>(this, "FPerPlayerSplitscreenData.OriginY"); }
};

