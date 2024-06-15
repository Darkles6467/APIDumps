#pragma once

#include "BaseDeclarations.h"
struct FPackedNormal
{
	char __padding[0x4L];
	FPackedNormal::<unnamed_type_Vector>& VectorField() { return *GetNativePointerField<FPackedNormal::<unnamed_type_Vector>*>(this, "FPackedNormal.Vector"); }
};

