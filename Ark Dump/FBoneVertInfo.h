#pragma once

#include "BaseDeclarations.h"
struct FBoneVertInfo
{
	char __padding[0x20L];
	TArray<FVector>& PositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FBoneVertInfo.Positions"); }
	TArray<FVector>& NormalsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FBoneVertInfo.Normals"); }
};

