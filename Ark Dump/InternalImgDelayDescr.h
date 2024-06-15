#pragma once

#include "BaseDeclarations.h"
struct InternalImgDelayDescr
{
	char __padding[0x40L];
	unsigned int& grAttrsField() { return *GetNativePointerField<unsigned int*>(this, "InternalImgDelayDescr.grAttrs"); }
	const char * szNameField() { return GetNativePointerField<const char *>(this, "InternalImgDelayDescr.szName"); }
	HINSTANCE__ ** phmodField() { return GetNativePointerField<HINSTANCE__ **>(this, "InternalImgDelayDescr.phmod"); }
	_IMAGE_THUNK_DATA64 * pIATField() { return GetNativePointerField<_IMAGE_THUNK_DATA64 *>(this, "InternalImgDelayDescr.pIAT"); }
	const _IMAGE_THUNK_DATA64 * pINTField() { return GetNativePointerField<const _IMAGE_THUNK_DATA64 *>(this, "InternalImgDelayDescr.pINT"); }
	const _IMAGE_THUNK_DATA64 * pBoundIATField() { return GetNativePointerField<const _IMAGE_THUNK_DATA64 *>(this, "InternalImgDelayDescr.pBoundIAT"); }
	const _IMAGE_THUNK_DATA64 * pUnloadIATField() { return GetNativePointerField<const _IMAGE_THUNK_DATA64 *>(this, "InternalImgDelayDescr.pUnloadIAT"); }
	unsigned int& dwTimeStampField() { return *GetNativePointerField<unsigned int*>(this, "InternalImgDelayDescr.dwTimeStamp"); }
};

