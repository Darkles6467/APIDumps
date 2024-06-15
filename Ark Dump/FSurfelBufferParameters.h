#pragma once

#include "BaseDeclarations.h"
struct FSurfelBufferParameters
{
	char __padding[0x18L];
	FRWShaderParameter& InterpolatedVertexDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FSurfelBufferParameters.InterpolatedVertexData"); }
	FRWShaderParameter& SurfelDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FSurfelBufferParameters.SurfelData"); }
	FRWShaderParameter& VPLFluxField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FSurfelBufferParameters.VPLFlux"); }
};

