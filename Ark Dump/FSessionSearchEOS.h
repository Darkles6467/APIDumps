#pragma once

#include "BaseDeclarations.h"
struct FSessionSearchEOS
{
	char __padding[0x10L];
	struct EOS_SessionSearchHandle * SearchHandleField() { return GetNativePointerField<struct EOS_SessionSearchHandle *>(this, "FSessionSearchEOS.SearchHandle"); }

	// Functions

};

