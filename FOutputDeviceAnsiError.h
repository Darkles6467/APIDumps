#pragma once

#include "BaseDeclarations.h"
#include "FOutputDeviceError.h"
#include "FOutputDevice.h"

struct FOutputDeviceAnsiError : FOutputDeviceError
{
	char __padding[0x8L];
	int& ErrorPosField() { return *GetNativePointerField<int*>(this, "FOutputDeviceAnsiError.ErrorPos"); }
};

