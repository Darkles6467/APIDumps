#pragma once

#include "BaseDeclarations.h"
struct FAtmosphereShaderPrecomputeTextureParameters
{
	enum TexType
	{
		Transmittance = 0x0,
		Irradiance = 0x1,
		DeltaE = 0x2,
		Inscatter = 0x3,
		DeltaSR = 0x4,
		DeltaSM = 0x5,
		DeltaJ = 0x6,
		Type_MAX = 0x7,
	};

	char __padding[0x20L];
};

