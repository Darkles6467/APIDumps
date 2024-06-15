#pragma once

#include "BaseDeclarations.h"
struct FVertexFactoryParameterRef
{
	char __padding[0x28L];
	EShaderFrequency& ShaderFrequencyField() { return *GetNativePointerField<EShaderFrequency*>(this, "FVertexFactoryParameterRef.ShaderFrequency"); }
	FSHAHash& VFHashField() { return *GetNativePointerField<FSHAHash*>(this, "FVertexFactoryParameterRef.VFHash"); }

	// Functions

};

