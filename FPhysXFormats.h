#pragma once

#include "BaseDeclarations.h"
#include "FTriIndices.h"

struct IPhysXFormat
{
	char __padding[0x8L];

	// Functions

};

struct FPhysXFormats : IPhysXFormat
{
	char __padding[0x8L];
	physx::PxCooking * PhysXCookingField() { return GetNativePointerField<physx::PxCooking *>(this, "FPhysXFormats.PhysXCooking"); }

	// Functions

	bool CookConvex(FName Format, const TArray<FVector> * SrcBuffer, TArray<unsigned char> * OutBuffer) { return NativeCall<bool, FName, const TArray<FVector> *, TArray<unsigned char> *>(this, "FPhysXFormats.CookConvex", Format, SrcBuffer, OutBuffer); }
	bool CookHeightField(FName Format, FIntPoint HFSize, float Thickness, const void * Samples, unsigned int SamplesStride, TArray<unsigned char> * OutBuffer) { return NativeCall<bool, FName, FIntPoint, float, const void *, unsigned int, TArray<unsigned char> *>(this, "FPhysXFormats.CookHeightField", Format, HFSize, Thickness, Samples, SamplesStride, OutBuffer); }
	bool CookTriMesh(FName Format, const TArray<FVector> * SrcVertices, const TArray<FTriIndices> * SrcIndices, const TArray<unsigned short> * SrcMaterialIndices, const bool FlipNormals, TArray<unsigned char> * OutBuffer, bool bPerPolySkeletalMesh) { return NativeCall<bool, FName, const TArray<FVector> *, const TArray<FTriIndices> *, const TArray<unsigned short> *, const bool, TArray<unsigned char> *, bool>(this, "FPhysXFormats.CookTriMesh", Format, SrcVertices, SrcIndices, SrcMaterialIndices, FlipNormals, OutBuffer, bPerPolySkeletalMesh); }
	void GetSupportedFormats(TArray<FName> * OutFormats) { NativeCall<void, TArray<FName> *>(this, "FPhysXFormats.GetSupportedFormats", OutFormats); }
};

