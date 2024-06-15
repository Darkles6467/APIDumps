#pragma once

#include "BaseDeclarations.h"
struct PGFixed
{
	enum FixedRaw
	{
		RAW = 0x0,
	};

	char __padding[0x4L];
	int& fixedField() { return *GetNativePointerField<int*>(this, "PGFixed.fixed"); }

	// Functions

	static int * CacheFromFloatValue(float a) { return NativeCall<int *, float>(nullptr, "PGFixed.CacheFromFloatValue", a); }
};

