#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTrueSkySequenceAsset : UObject
{
	char __padding[0x10L];
	TArray<unsigned char>& SequenceTextField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UTrueSkySequenceAsset.SequenceText"); }

	// Functions

};

