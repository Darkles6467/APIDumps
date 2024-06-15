#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveObjectPropertyMapper : FArchiveUObject
{
	char __padding[0x30L];
	bool& bRequireDirectOuterField() { return *GetNativePointerField<bool*>(this, "FArchiveObjectPropertyMapper.bRequireDirectOuter"); }
	bool& bSerializeRecursivelyField() { return *GetNativePointerField<bool*>(this, "FArchiveObjectPropertyMapper.bSerializeRecursively"); }
};

