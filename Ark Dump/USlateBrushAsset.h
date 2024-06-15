#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USlateBrushAsset : UObject
{
	char __padding[0x78L];

	// Functions

	void PostLoad() { NativeCall<void>(this, "USlateBrushAsset.PostLoad"); }
};

