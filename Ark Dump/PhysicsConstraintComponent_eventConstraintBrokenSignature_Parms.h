#pragma once

#include "BaseDeclarations.h"
struct PhysicsConstraintComponent_eventConstraintBrokenSignature_Parms
{
	char __padding[0x4L];
	int& ConstraintIndexField() { return *GetNativePointerField<int*>(this, "PhysicsConstraintComponent_eventConstraintBrokenSignature_Parms.ConstraintIndex"); }
};

