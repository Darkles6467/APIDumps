#pragma once

#include "BaseDeclarations.h"
#include "FShadowMapData2D.h"

struct FShadowSignedDistanceFieldData2D : FShadowMapData2D
{
	char __padding[0x10L];
	TArray<FSignedDistanceFieldShadowSample>& DataField() { return *GetNativePointerField<TArray<FSignedDistanceFieldShadowSample>*>(this, "FShadowSignedDistanceFieldData2D.Data"); }
};

