#pragma once

#include "BaseDeclarations.h"
#include "FDynamicRHI.h"
#include "FIntRect.h"
#include "FColor.h"
#include "FReadSurfaceDataFlags.h"

struct FNullDynamicRHI : FDynamicRHI
{
	char __padding[0x8L];

	// Functions

	const wchar_t * GetName() { return NativeCall<const wchar_t *>(this, "FNullDynamicRHI.GetName"); }
	void Init() { NativeCall<void>(this, "FNullDynamicRHI.Init"); }
	void RHIBeginDrawIndexedPrimitiveUP(unsigned int PrimitiveType, unsigned int NumPrimitives, unsigned int NumVertices, unsigned int VertexDataStride, void ** OutVertexData, unsigned int MinVertexIndex, unsigned int NumIndices, unsigned int IndexDataStride, void ** OutIndexData) { NativeCall<void, unsigned int, unsigned int, unsigned int, unsigned int, void **, unsigned int, unsigned int, unsigned int, void **>(this, "FNullDynamicRHI.RHIBeginDrawIndexedPrimitiveUP", PrimitiveType, NumPrimitives, NumVertices, VertexDataStride, OutVertexData, MinVertexIndex, NumIndices, IndexDataStride, OutIndexData); }
	void RHIBeginDrawPrimitiveUP(unsigned int PrimitiveType, unsigned int NumPrimitives, unsigned int NumVertices, unsigned int VertexDataStride, void ** OutVertexData) { NativeCall<void, unsigned int, unsigned int, unsigned int, unsigned int, void **>(this, "FNullDynamicRHI.RHIBeginDrawPrimitiveUP", PrimitiveType, NumPrimitives, NumVertices, VertexDataStride, OutVertexData); }
	unsigned __int64 RHICalcTexture3DPlatformSize(unsigned int SizeX, unsigned int SizeY, unsigned int SizeZ, char Format, unsigned int NumMips, unsigned int Flags, unsigned int * OutAlign) { return NativeCall<unsigned __int64, unsigned int, unsigned int, unsigned int, char, unsigned int, unsigned int, unsigned int *>(this, "FNullDynamicRHI.RHICalcTexture3DPlatformSize", SizeX, SizeY, SizeZ, Format, NumMips, Flags, OutAlign); }
	unsigned __int64 RHICalcTextureCubePlatformSize(unsigned int Size, char Format, unsigned int NumMips, unsigned int Flags, unsigned int * OutAlign) { return NativeCall<unsigned __int64, unsigned int, char, unsigned int, unsigned int, unsigned int *>(this, "FNullDynamicRHI.RHICalcTextureCubePlatformSize", Size, Format, NumMips, Flags, OutAlign); }
	void * RHILockTexture2D(FRHITexture2D * Texture, unsigned int MipIndex, EResourceLockMode LockMode, unsigned int * DestStride, bool bLockWithinMiptail) { return NativeCall<void *, FRHITexture2D *, unsigned int, EResourceLockMode, unsigned int *, bool>(this, "FNullDynamicRHI.RHILockTexture2D", Texture, MipIndex, LockMode, DestStride, bLockWithinMiptail); }
	void * RHILockTexture2DArray(FRHITexture2DArray * Texture, unsigned int TextureIndex, unsigned int MipIndex, EResourceLockMode LockMode, unsigned int * DestStride, bool bLockWithinMiptail) { return NativeCall<void *, FRHITexture2DArray *, unsigned int, unsigned int, EResourceLockMode, unsigned int *, bool>(this, "FNullDynamicRHI.RHILockTexture2DArray", Texture, TextureIndex, MipIndex, LockMode, DestStride, bLockWithinMiptail); }
	void * RHILockTextureCubeFace(FRHITextureCube * Texture, unsigned int FaceIndex, unsigned int ArrayIndex, unsigned int MipIndex, EResourceLockMode LockMode, unsigned int * DestStride, bool bLockWithinMiptail) { return NativeCall<void *, FRHITextureCube *, unsigned int, unsigned int, unsigned int, EResourceLockMode, unsigned int *, bool>(this, "FNullDynamicRHI.RHILockTextureCubeFace", Texture, FaceIndex, ArrayIndex, MipIndex, LockMode, DestStride, bLockWithinMiptail); }
	void * RHILockIndexBuffer(FRHIVertexBuffer * VertexBuffer, unsigned int Offset, unsigned int SizeRHI, EResourceLockMode LockMode) { return NativeCall<void *, FRHIVertexBuffer *, unsigned int, unsigned int, EResourceLockMode>(this, "FNullDynamicRHI.RHILockIndexBuffer", VertexBuffer, Offset, SizeRHI, LockMode); }
	void RHIReadSurfaceData(FRHITexture * Texture, FIntRect Rect, TArray<FColor> * OutData, FReadSurfaceDataFlags InFlags) { NativeCall<void, FRHITexture *, FIntRect, TArray<FColor> *, FReadSurfaceDataFlags>(this, "FNullDynamicRHI.RHIReadSurfaceData", Texture, Rect, OutData, InFlags); }
};

