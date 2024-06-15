#pragma once

#include "BaseDeclarations.h"
struct FOutParmRec
{
	char __padding[0x18L];
	char * PropAddrField() { return GetNativePointerField<char *>(this, "FOutParmRec.PropAddr"); }
	FOutParmRec * NextOutParmField() { return GetNativePointerField<FOutParmRec *>(this, "FOutParmRec.NextOutParm"); }
};

