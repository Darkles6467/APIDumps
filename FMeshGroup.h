#pragma once

#include "BaseDeclarations.h"
struct FMeshGroup
{
	char __padding[0x28L];
	UStaticMesh * MeshField() { return GetNativePointerField<UStaticMesh *>(this, "FMeshGroup.Mesh"); }
	int& ProxyIDField() { return *GetNativePointerField<int*>(this, "FMeshGroup.ProxyID"); }
};

