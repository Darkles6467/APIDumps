#pragma once

#include "BaseDeclarations.h"
struct FInstancedSurfelBuffers
{
	char __padding[0x28L];
	int& MaxSurfelsField() { return *GetNativePointerField<int*>(this, "FInstancedSurfelBuffers.MaxSurfels"); }
	FRWBuffer& VPLFluxField() { return *GetNativePointerField<FRWBuffer*>(this, "FInstancedSurfelBuffers.VPLFlux"); }
};

