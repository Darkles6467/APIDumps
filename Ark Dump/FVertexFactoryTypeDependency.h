#pragma once

#include "BaseDeclarations.h"
struct FVertexFactoryTypeDependency
{
	char __padding[0x20L];
	FSHAHash& VFSourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FVertexFactoryTypeDependency.VFSourceHash"); }
};

