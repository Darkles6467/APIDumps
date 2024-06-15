#pragma once

#include "BaseDeclarations.h"
struct FDrawBasePassForwardShadingStaticMeshAction
{
	char __padding[0x10L];
	FScene * SceneField() { return GetNativePointerField<FScene *>(this, "FDrawBasePassForwardShadingStaticMeshAction.Scene"); }
	FStaticMesh * StaticMeshField() { return GetNativePointerField<FStaticMesh *>(this, "FDrawBasePassForwardShadingStaticMeshAction.StaticMesh"); }
};

