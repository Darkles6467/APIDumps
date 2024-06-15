#pragma once

#include "BaseDeclarations.h"
struct UText
{
	char __padding[0x90L];
	unsigned int& magicField() { return *GetNativePointerField<unsigned int*>(this, "UText.magic"); }
	int& flagsField() { return *GetNativePointerField<int*>(this, "UText.flags"); }
	int& providerPropertiesField() { return *GetNativePointerField<int*>(this, "UText.providerProperties"); }
	int& sizeOfStructField() { return *GetNativePointerField<int*>(this, "UText.sizeOfStruct"); }
	__int64& chunkNativeLimitField() { return *GetNativePointerField<__int64*>(this, "UText.chunkNativeLimit"); }
	int& extraSizeField() { return *GetNativePointerField<int*>(this, "UText.extraSize"); }
	int& nativeIndexingLimitField() { return *GetNativePointerField<int*>(this, "UText.nativeIndexingLimit"); }
	__int64& chunkNativeStartField() { return *GetNativePointerField<__int64*>(this, "UText.chunkNativeStart"); }
	int& chunkOffsetField() { return *GetNativePointerField<int*>(this, "UText.chunkOffset"); }
	int& chunkLengthField() { return *GetNativePointerField<int*>(this, "UText.chunkLength"); }
	const wchar_t * chunkContentsField() { return GetNativePointerField<const wchar_t *>(this, "UText.chunkContents"); }
	const UTextFuncs * pFuncsField() { return GetNativePointerField<const UTextFuncs *>(this, "UText.pFuncs"); }
	void * pExtraField() { return GetNativePointerField<void *>(this, "UText.pExtra"); }
	const void * contextField() { return GetNativePointerField<const void *>(this, "UText.context"); }
	const void * pField() { return GetNativePointerField<const void *>(this, "UText.p"); }
	const void * qField() { return GetNativePointerField<const void *>(this, "UText.q"); }
	const void * rField() { return GetNativePointerField<const void *>(this, "UText.r"); }
	void * privPField() { return GetNativePointerField<void *>(this, "UText.privP"); }
	__int64& aField() { return *GetNativePointerField<__int64*>(this, "UText.a"); }
	int& bField() { return *GetNativePointerField<int*>(this, "UText.b"); }
	int& cField() { return *GetNativePointerField<int*>(this, "UText.c"); }
	__int64& privAField() { return *GetNativePointerField<__int64*>(this, "UText.privA"); }
	int& privBField() { return *GetNativePointerField<int*>(this, "UText.privB"); }
	int& privCField() { return *GetNativePointerField<int*>(this, "UText.privC"); }
};

