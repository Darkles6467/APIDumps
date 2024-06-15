#pragma once

#include "BaseDeclarations.h"
struct FFogOfWarInfoStruct
{
	char __padding[0x38L];
	FString& MapnameField() { return *GetNativePointerField<FString*>(this, "FFogOfWarInfoStruct.Mapname"); }
	TArray<unsigned char>& CompressedVisibilityBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FFogOfWarInfoStruct.CompressedVisibilityBuffer"); }
	unsigned int& UnCompressedVisibilityBufferSizeField() { return *GetNativePointerField<unsigned int*>(this, "FFogOfWarInfoStruct.UnCompressedVisibilityBufferSize"); }
	TArray<bool>& UnlockMaskField() { return *GetNativePointerField<TArray<bool>*>(this, "FFogOfWarInfoStruct.UnlockMask"); }

	// Functions

	FFogOfWarInfoStruct * operator=(const FFogOfWarInfoStruct * __that) { return NativeCall<FFogOfWarInfoStruct *, const FFogOfWarInfoStruct *>(this, "FFogOfWarInfoStruct.operator=", __that); }
};

