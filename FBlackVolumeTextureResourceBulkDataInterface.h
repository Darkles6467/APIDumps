#pragma once

#include "BaseDeclarations.h"
#include "FResourceBulkDataInterface.h"

struct FBlackVolumeTextureResourceBulkDataInterface : FResourceBulkDataInterface
{
	char __padding[0x8L];
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FBlackVolumeTextureResourceBulkDataInterface.Color"); }
};

