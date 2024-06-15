#pragma once

#include "BaseDeclarations.h"
#include "FShadowMapData2D.h"

struct FQuantizedShadowSignedDistanceFieldData2D : FShadowMapData2D
{
	char __padding[0x10L];
	TArray<FQuantizedSignedDistanceFieldShadowSample>& DataField() { return *GetNativePointerField<TArray<FQuantizedSignedDistanceFieldShadowSample>*>(this, "FQuantizedShadowSignedDistanceFieldData2D.Data"); }
};

