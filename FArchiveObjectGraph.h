#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveObjectGraph : FArchiveUObject
{
	char __padding[0x70L];
	bool& bIncludeTransientsField() { return *GetNativePointerField<bool*>(this, "FArchiveObjectGraph.bIncludeTransients"); }
	EObjectFlags& RequiredFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "FArchiveObjectGraph.RequiredFlags"); }
};

