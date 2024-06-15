#pragma once

#include "BaseDeclarations.h"
struct FPawnActionStack
{
	char __padding[0x8L];

	// Functions

	void PopAction(UPawnAction * ActionToPop) { NativeCall<void, UPawnAction *>(this, "FPawnActionStack.PopAction", ActionToPop); }
	void PushAction(UPawnAction * NewTopAction) { NativeCall<void, UPawnAction *>(this, "FPawnActionStack.PushAction", NewTopAction); }
};

