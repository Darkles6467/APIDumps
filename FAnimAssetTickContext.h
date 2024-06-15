#pragma once

#include "BaseDeclarations.h"
struct FAnimAssetTickContext
{
	char __padding[0xcL];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "FAnimAssetTickContext.DeltaTime"); }
	float& SyncPointField() { return *GetNativePointerField<float*>(this, "FAnimAssetTickContext.SyncPoint"); }
	bool& bIsLeaderField() { return *GetNativePointerField<bool*>(this, "FAnimAssetTickContext.bIsLeader"); }
};

