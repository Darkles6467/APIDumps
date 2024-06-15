#pragma once

#include "BaseDeclarations.h"
struct FPendingRegistrant
{
	char __padding[0x10L];
	FPendingRegistrant * NextAutoRegisterField() { return GetNativePointerField<FPendingRegistrant *>(this, "FPendingRegistrant.NextAutoRegister"); }
};

