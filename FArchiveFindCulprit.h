#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveFindCulprit : FArchiveUObject
{
	char __padding[0x20L];
	int& CountField() { return *GetNativePointerField<int*>(this, "FArchiveFindCulprit.Count"); }
	bool& PretendSavingField() { return *GetNativePointerField<bool*>(this, "FArchiveFindCulprit.PretendSaving"); }
};

