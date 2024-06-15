#pragma once

#include "BaseDeclarations.h"
struct PrimalLocalProfile_eventOnSaveArkTributeFinished_Parms
{
	char __padding[0x1L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "PrimalLocalProfile_eventOnSaveArkTributeFinished_Parms.Success"); }
};

