#pragma once

#include "BaseDeclarations.h"
struct FColorChannels
{
	char __padding[0x20L];
	float * RedField() { return GetNativePointerField<float *>(this, "FColorChannels.Red"); }
	float * GreenField() { return GetNativePointerField<float *>(this, "FColorChannels.Green"); }
	float * BlueField() { return GetNativePointerField<float *>(this, "FColorChannels.Blue"); }
	float * AlphaField() { return GetNativePointerField<float *>(this, "FColorChannels.Alpha"); }
};

