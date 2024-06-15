#pragma once

#include "BaseDeclarations.h"
struct FTorqueTarget
{
	char __padding[0xcL];
	FVector& TorqueField() { return *GetNativePointerField<FVector*>(this, "FTorqueTarget.Torque"); }
};

