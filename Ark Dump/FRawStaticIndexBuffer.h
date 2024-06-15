#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FRawStaticIndexBuffer : FIndexBuffer
{
	char __padding[0x28L];
	TResourceArray<unsigned char,0>& IndexStorageField() { return *GetNativePointerField<TResourceArray<unsigned char,0>*>(this, "FRawStaticIndexBuffer.IndexStorage"); }
	bool& b32BitField() { return *GetNativePointerField<bool*>(this, "FRawStaticIndexBuffer.b32Bit"); }

	// Functions

	FIndexArrayView * GetArrayView(FIndexArrayView * result) { return NativeCall<FIndexArrayView *, FIndexArrayView *>(this, "FRawStaticIndexBuffer.GetArrayView", result); }
	void GetCopy(TArray<unsigned int> * OutIndices) { NativeCall<void, TArray<unsigned int> *>(this, "FRawStaticIndexBuffer.GetCopy", OutIndices); }
	void InitRHI() { NativeCall<void>(this, "FRawStaticIndexBuffer.InitRHI"); }
	void Serialize(FArchive * Ar, bool bNeedsCPUAccess) { NativeCall<void, FArchive *, bool>(this, "FRawStaticIndexBuffer.Serialize", Ar, bNeedsCPUAccess); }
	void SetIndices(const TArray<unsigned int> * InIndices, EIndexBufferStride::Type DesiredStride) { NativeCall<void, const TArray<unsigned int> *, EIndexBufferStride::Type>(this, "FRawStaticIndexBuffer.SetIndices", InIndices, DesiredStride); }
};

