#pragma once

#include "BaseDeclarations.h"
struct FModuleLocationBoneSocketInstancePayload
{
	char __padding[0x30L];
	int& LastSelectedIndexField() { return *GetNativePointerField<int*>(this, "FModuleLocationBoneSocketInstancePayload.LastSelectedIndex"); }
	int& CurrentUnusedField() { return *GetNativePointerField<int*>(this, "FModuleLocationBoneSocketInstancePayload.CurrentUnused"); }
	TPreallocatedArrayProxy<FVector>& PrevFrameBoneSocketPositionsField() { return *GetNativePointerField<TPreallocatedArrayProxy<FVector>*>(this, "FModuleLocationBoneSocketInstancePayload.PrevFrameBoneSocketPositions"); }
	TPreallocatedArrayProxy<FVector>& BoneSocketVelocitiesField() { return *GetNativePointerField<TPreallocatedArrayProxy<FVector>*>(this, "FModuleLocationBoneSocketInstancePayload.BoneSocketVelocities"); }
};

