#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UButtonStyleAsset : UObject
{
	char __padding[0x248L];
	FButtonStyle& ButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "UButtonStyleAsset.ButtonStyle"); }

	// Functions

};

