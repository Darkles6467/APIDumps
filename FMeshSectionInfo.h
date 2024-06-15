#pragma once

#include "BaseDeclarations.h"
struct FMeshSectionInfo
{
	char __padding[0x8L];
	int& MaterialIndexField() { return *GetNativePointerField<int*>(this, "FMeshSectionInfo.MaterialIndex"); }
	bool& bEnableCollisionField() { return *GetNativePointerField<bool*>(this, "FMeshSectionInfo.bEnableCollision"); }
	bool& bCastShadowField() { return *GetNativePointerField<bool*>(this, "FMeshSectionInfo.bCastShadow"); }

	// Functions

};

