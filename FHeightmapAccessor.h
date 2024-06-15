#pragma once

#include "BaseDeclarations.h"
struct FHeightmapAccessor
{
	char __padding[0x68L];
	ULandscapeInfo * LandscapeInfoField() { return GetNativePointerField<ULandscapeInfo *>(this, "FHeightmapAccessor.LandscapeInfo"); }
	FLandscapeEditDataInterface * LandscapeEditField() { return GetNativePointerField<FLandscapeEditDataInterface *>(this, "FHeightmapAccessor.LandscapeEdit"); }
};

