#pragma once

#include "BaseDeclarations.h"
struct FFuncParms
{
	char __padding[0x10L];
	UFunction * FuncField() { return GetNativePointerField<UFunction *>(this, "FFuncParms.Func"); }
	char * ParmsField() { return GetNativePointerField<char *>(this, "FFuncParms.Parms"); }
};

