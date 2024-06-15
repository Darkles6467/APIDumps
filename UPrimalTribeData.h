#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalTribeData : UObject
{
	char __padding[0x140L];
	FTribeData& TribeDataField() { return *GetNativePointerField<FTribeData*>(this, "UPrimalTribeData.TribeData"); }

	// Functions

};

