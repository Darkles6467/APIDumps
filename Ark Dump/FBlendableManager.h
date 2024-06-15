#pragma once

#include "BaseDeclarations.h"
struct FBlendableManager
{
	char __padding[0x10L];
	TArray<unsigned char>& ScratchField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FBlendableManager.Scratch"); }

	// Functions

	void PushBlendableDataPtr(float InWeight, FName InBlendableType, const char * InData, unsigned int InDataSize) { NativeCall<void, float, FName, const char *, unsigned int>(this, "FBlendableManager.PushBlendableDataPtr", InWeight, InBlendableType, InData, InDataSize); }
};

