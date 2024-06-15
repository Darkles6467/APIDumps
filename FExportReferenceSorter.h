#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FExportReferenceSorter : FArchiveUObject
{
	char __padding[0x98L];
	int& CurrentInsertIndexField() { return *GetNativePointerField<int*>(this, "FExportReferenceSorter.CurrentInsertIndex"); }
	int& CoreReferencesOffsetField() { return *GetNativePointerField<int*>(this, "FExportReferenceSorter.CoreReferencesOffset"); }
	bool& bIgnoreFieldReferencesField() { return *GetNativePointerField<bool*>(this, "FExportReferenceSorter.bIgnoreFieldReferences"); }
};

