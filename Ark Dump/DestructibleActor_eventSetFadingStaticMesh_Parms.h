#pragma once

#include "BaseDeclarations.h"
struct DestructibleActor_eventSetFadingStaticMesh_Parms
{
	char __padding[0x8L];
	UStaticMesh * TheMeshField() { return GetNativePointerField<UStaticMesh *>(this, "DestructibleActor_eventSetFadingStaticMesh_Parms.TheMesh"); }
};

