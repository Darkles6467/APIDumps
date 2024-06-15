#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCheckBoxStyleAsset : UObject
{
	char __padding[0x508L];
	FCheckBoxStyle& CheckBoxStyleField() { return *GetNativePointerField<FCheckBoxStyle*>(this, "UCheckBoxStyleAsset.CheckBoxStyle"); }

	// Functions

};

