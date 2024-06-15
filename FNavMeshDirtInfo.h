#pragma once

#include "BaseDeclarations.h"
struct FNavMeshDirtInfo
{
	char __padding[0x28L];
	FBox& BoxField() { return *GetNativePointerField<FBox*>(this, "FNavMeshDirtInfo.Box"); }
};

