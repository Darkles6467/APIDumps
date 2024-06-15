#pragma once

#include "BaseDeclarations.h"
#include "FResourceBulkDataInterface.h"

struct FAtmosphereResourceBulkDataInterface : FResourceBulkDataInterface
{
	char __padding[0x10L];
	void * BulkDataField() { return GetNativePointerField<void *>(this, "FAtmosphereResourceBulkDataInterface.BulkData"); }
	unsigned int& BulkDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FAtmosphereResourceBulkDataInterface.BulkDataSize"); }
};

