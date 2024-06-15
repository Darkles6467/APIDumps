#pragma once

#include "BaseDeclarations.h"
struct FShadowMapData2D
{
	enum ShadowMapDataType
	{
		UNKNOWN = 0x0,
		SHADOW_FACTOR_DATA = 0x1,
		SHADOW_FACTOR_DATA_QUANTIZED = 0x2,
		SHADOW_SIGNED_DISTANCE_FIELD_DATA = 0x3,
		SHADOW_SIGNED_DISTANCE_FIELD_DATA_QUANTIZED = 0x4,
	};

	char __padding[0x10L];
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FShadowMapData2D.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FShadowMapData2D.SizeY"); }
};

