#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct FWmfMediaReadState : IUnknown
{
	char __padding[0x18L];
	unsigned __int64& BytesReadField() { return *GetNativePointerField<unsigned __int64*>(this, "FWmfMediaReadState.BytesRead"); }
	char * ReadBufferField() { return GetNativePointerField<char *>(this, "FWmfMediaReadState.ReadBuffer"); }
	unsigned int& ReadBufferSizeField() { return *GetNativePointerField<unsigned int*>(this, "FWmfMediaReadState.ReadBufferSize"); }
	int& RefCountField() { return *GetNativePointerField<int*>(this, "FWmfMediaReadState.RefCount"); }

	// Functions

	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FWmfMediaReadState.AddRef"); }
	HRESULT QueryInterface(const _GUID * RefID, void ** Object) { return NativeCall<HRESULT, const _GUID *, void **>(this, "FWmfMediaReadState.QueryInterface", RefID, Object); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FWmfMediaReadState.Release"); }
};

