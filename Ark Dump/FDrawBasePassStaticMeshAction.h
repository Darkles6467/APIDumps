#pragma once

#include "BaseDeclarations.h"
struct FDrawBasePassStaticMeshAction
{
	char __padding[0x10L];
	FScene * SceneField() { return GetNativePointerField<FScene *>(this, "FDrawBasePassStaticMeshAction.Scene"); }
	FStaticMesh * StaticMeshField() { return GetNativePointerField<FStaticMesh *>(this, "FDrawBasePassStaticMeshAction.StaticMesh"); }
};

