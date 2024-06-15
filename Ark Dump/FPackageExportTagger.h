#pragma once

#include "BaseDeclarations.h"
struct FPackageExportTagger
{
	char __padding[0x18L];
	EObjectFlags& TopLevelFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "FPackageExportTagger.TopLevelFlags"); }
};

