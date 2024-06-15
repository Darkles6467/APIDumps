#pragma once

#include "BaseDeclarations.h"
struct FFullSubUVPayload
{
	char __padding[0x8L];
	float& ImageIndexField() { return *GetNativePointerField<float*>(this, "FFullSubUVPayload.ImageIndex"); }
	float& RandomImageTimeField() { return *GetNativePointerField<float*>(this, "FFullSubUVPayload.RandomImageTime"); }
};

