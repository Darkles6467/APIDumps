#pragma once

#include "BaseDeclarations.h"
struct FEventReply
{
	char __padding[0xa0L];
	FReply& NativeReplyField() { return *GetNativePointerField<FReply*>(this, "FEventReply.NativeReply"); }

	// Functions

};

