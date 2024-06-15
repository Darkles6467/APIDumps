#pragma once

#include "BaseDeclarations.h"
struct FGlobalTexturePool
{
	enum EInternalFormat
	{
		IF_DXT1 = 0x0,
		IF_DXT5 = 0x1,
		IF_BC5 = 0x2,
		IF_Max = 0x3,
	};

	char __padding[0x120L];
	FieldArray<FTexturePool[6][3], 63> PoolsField() { return {this, "FGlobalTexturePool.Pools"}; }
};

