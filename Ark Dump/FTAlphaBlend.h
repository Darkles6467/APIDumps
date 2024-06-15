#pragma once

#include "BaseDeclarations.h"
struct FTAlphaBlend
{
	char __padding[0x18L];
	float& AlphaInField() { return *GetNativePointerField<float*>(this, "FTAlphaBlend.AlphaIn"); }
	float& AlphaOutField() { return *GetNativePointerField<float*>(this, "FTAlphaBlend.AlphaOut"); }
	float& AlphaTargetField() { return *GetNativePointerField<float*>(this, "FTAlphaBlend.AlphaTarget"); }
	float& BlendTimeField() { return *GetNativePointerField<float*>(this, "FTAlphaBlend.BlendTime"); }
	float& BlendTimeToGoField() { return *GetNativePointerField<float*>(this, "FTAlphaBlend.BlendTimeToGo"); }
	char& BlendTypeField() { return *GetNativePointerField<char*>(this, "FTAlphaBlend.BlendType"); }
};

