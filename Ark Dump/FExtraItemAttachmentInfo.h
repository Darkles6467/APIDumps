#pragma once

#include "BaseDeclarations.h"
struct FExtraItemAttachmentInfo
{
	char __padding[0x10L];
	FName& SocketToAttachToField() { return *GetNativePointerField<FName*>(this, "FExtraItemAttachmentInfo.SocketToAttachTo"); }

	// Functions

};

