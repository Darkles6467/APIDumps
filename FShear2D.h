#pragma once

#include "BaseDeclarations.h"
struct FShear2D
{
	char __padding[0x8L];
	FVector2D& ShearField() { return *GetNativePointerField<FVector2D*>(this, "FShear2D.Shear"); }

	// Functions

	static FShear2D * FromShearAngles(FShear2D * result, const FVector2D * InShearAngles) { return NativeCall<FShear2D *, FShear2D *, const FVector2D *>(nullptr, "FShear2D.FromShearAngles", result, InShearAngles); }
};

