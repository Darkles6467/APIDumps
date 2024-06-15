#pragma once

#include "BaseDeclarations.h"
struct FFindStronglyConnected
{
	char __padding[0x198L];
	int& MasterIndexField() { return *GetNativePointerField<int*>(this, "FFindStronglyConnected.MasterIndex"); }
};

