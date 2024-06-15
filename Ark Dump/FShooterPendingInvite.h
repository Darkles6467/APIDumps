#pragma once

#include "BaseDeclarations.h"
struct FShooterPendingInvite
{
	char __padding[0xa8L];
	int& ControllerIdField() { return *GetNativePointerField<int*>(this, "FShooterPendingInvite.ControllerId"); }

	// Functions

};

