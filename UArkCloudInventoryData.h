#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UArkCloudInventoryData : UObject
{
	char __padding[0x30L];
	FArkInventoryData& MyArkDataField() { return *GetNativePointerField<FArkInventoryData*>(this, "UArkCloudInventoryData.MyArkData"); }

	// Functions

};

