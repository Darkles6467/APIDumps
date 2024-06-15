#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"
#include "FColor.h"

struct FColorVertexBuffer : FVertexBuffer
{
	char __padding[0x18L];
	char * DataField() { return GetNativePointerField<char *>(this, "FColorVertexBuffer.Data"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FColorVertexBuffer.Stride"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FColorVertexBuffer.NumVertices"); }

	// Functions

	void AllocateData(bool bNeedsCPUAccess) { NativeCall<void, bool>(this, "FColorVertexBuffer.AllocateData", bNeedsCPUAccess); }
	void ExportText(FString * ValueStr) { NativeCall<void, FString *>(this, "FColorVertexBuffer.ExportText", ValueStr); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FColorVertexBuffer.GetFriendlyName", result); }
	void GetVertexColors(TArray<FColor> * OutColors) { NativeCall<void, TArray<FColor> *>(this, "FColorVertexBuffer.GetVertexColors", OutColors); }
	void ImportText(const wchar_t * SourceText) { NativeCall<void, const wchar_t *>(this, "FColorVertexBuffer.ImportText", SourceText); }
	void InitFromColorArray(const FColor * InColors, unsigned int Count, unsigned int InStride) { NativeCall<void, const FColor *, unsigned int, unsigned int>(this, "FColorVertexBuffer.InitFromColorArray", InColors, Count, InStride); }
	void InitRHI() { NativeCall<void>(this, "FColorVertexBuffer.InitRHI"); }
	void Serialize(FArchive * Ar, bool bNeedsCPUAccess) { NativeCall<void, FArchive *, bool>(this, "FColorVertexBuffer.Serialize", Ar, bNeedsCPUAccess); }
};

