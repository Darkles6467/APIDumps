#pragma once

#include "BaseDeclarations.h"
struct ScalarRegister
{
	char __padding[0x10L];
	__m128& ValueField() { return *GetNativePointerField<__m128*>(this, "ScalarRegister.Value"); }
};

