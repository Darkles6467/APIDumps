#pragma once

#include "BaseDeclarations.h"
#include "IMFAsyncCallback.h"
#include "IUnknown.h"

struct FWmfMediaByteStream : IMFAsyncCallback
{
	char __padding[0x58L];
	bool& AsyncReadInProgressField() { return *GetNativePointerField<bool*>(this, "FWmfMediaByteStream.AsyncReadInProgress"); }
	TSharedRef<TArray<unsigned char>,1>& BufferField() { return *GetNativePointerField<TSharedRef<TArray<unsigned char>,1>*>(this, "FWmfMediaByteStream.Buffer"); }
	FWindowsCriticalSection& CriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FWmfMediaByteStream.CriticalSection"); }
	unsigned __int64& PositionField() { return *GetNativePointerField<unsigned __int64*>(this, "FWmfMediaByteStream.Position"); }
	int& RefCountField() { return *GetNativePointerField<int*>(this, "FWmfMediaByteStream.RefCount"); }

	// Functions

	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FWmfMediaByteStream.AddRef"); }
	HRESULT BeginRead(char * pb, unsigned int cb, IMFAsyncCallback * pCallback, IUnknown * punkState) { return NativeCall<HRESULT, char *, unsigned int, IMFAsyncCallback *, IUnknown *>(this, "FWmfMediaByteStream.BeginRead", pb, cb, pCallback, punkState); }
	HRESULT EndRead(IMFAsyncResult * pResult, unsigned int * pcbRead) { return NativeCall<HRESULT, IMFAsyncResult *, unsigned int *>(this, "FWmfMediaByteStream.EndRead", pResult, pcbRead); }
	HRESULT GetCapabilities(unsigned int * pdwCapabilities) { return NativeCall<HRESULT, unsigned int *>(this, "FWmfMediaByteStream.GetCapabilities", pdwCapabilities); }
	HRESULT GetCurrentPosition(unsigned __int64 * pqwPosition) { return NativeCall<HRESULT, unsigned __int64 *>(this, "FWmfMediaByteStream.GetCurrentPosition", pqwPosition); }
	HRESULT GetLength(unsigned __int64 * pqwLength) { return NativeCall<HRESULT, unsigned __int64 *>(this, "FWmfMediaByteStream.GetLength", pqwLength); }
	HRESULT BeginWrite(unsigned int * __formal, unsigned int * __formal) { return NativeCall<HRESULT, unsigned int *, unsigned int *>(this, "FWmfMediaByteStream.BeginWrite", __formal, __formal); }
	HRESULT Invoke(IMFAsyncResult * AsyncResult) { return NativeCall<HRESULT, IMFAsyncResult *>(this, "FWmfMediaByteStream.Invoke", AsyncResult); }
	HRESULT IsEndOfStream(int * pfEndOfStream) { return NativeCall<HRESULT, int *>(this, "FWmfMediaByteStream.IsEndOfStream", pfEndOfStream); }
	HRESULT QueryInterface(const _GUID * RefID, void ** Object) { return NativeCall<HRESULT, const _GUID *, void **>(this, "FWmfMediaByteStream.QueryInterface", RefID, Object); }
	HRESULT Read(char * pb, unsigned int cb, unsigned int * pcbRead) { return NativeCall<HRESULT, char *, unsigned int, unsigned int *>(this, "FWmfMediaByteStream.Read", pb, cb, pcbRead); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FWmfMediaByteStream.Release"); }
	HRESULT Seek(_MFBYTESTREAM_SEEK_ORIGIN SeekOrigin, __int64 qwSeekOffset, unsigned int dwSeekFlags, unsigned __int64 * pqwCurrentPosition) { return NativeCall<HRESULT, _MFBYTESTREAM_SEEK_ORIGIN, __int64, unsigned int, unsigned __int64 *>(this, "FWmfMediaByteStream.Seek", SeekOrigin, qwSeekOffset, dwSeekFlags, pqwCurrentPosition); }
	HRESULT SetCurrentPosition(unsigned __int64 qwPosition) { return NativeCall<HRESULT, unsigned __int64>(this, "FWmfMediaByteStream.SetCurrentPosition", qwPosition); }
};

