#pragma once

#include "BaseDeclarations.h"
struct FMeshBoneInfo
{
	char __padding[0xcL];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FMeshBoneInfo.Name"); }
	int& ParentIndexField() { return *GetNativePointerField<int*>(this, "FMeshBoneInfo.ParentIndex"); }
};

