#pragma once

#include "BaseDeclarations.h"
struct FNavMeshNodeFlags
{
	char __padding[0x4L];
	char& PathFlagsField() { return *GetNativePointerField<char*>(this, "FNavMeshNodeFlags.PathFlags"); }
	char& AreaField() { return *GetNativePointerField<char*>(this, "FNavMeshNodeFlags.Area"); }
	unsigned __int16& AreaFlagsField() { return *GetNativePointerField<unsigned __int16*>(this, "FNavMeshNodeFlags.AreaFlags"); }
};

