#pragma once

#include "BaseDeclarations.h"
#include "FDerivedDataPluginInterface.h"

struct FDerivedDataPhysXCooker : FDerivedDataPluginInterface
{
	char __padding[0x48L];
	FName& FormatField() { return *GetNativePointerField<FName*>(this, "FDerivedDataPhysXCooker.Format"); }
	bool& bGenerateNormalMeshField() { return *GetNativePointerField<bool*>(this, "FDerivedDataPhysXCooker.bGenerateNormalMesh"); }
	bool& bGenerateMirroredMeshField() { return *GetNativePointerField<bool*>(this, "FDerivedDataPhysXCooker.bGenerateMirroredMesh"); }
	FGuid& DataGuidField() { return *GetNativePointerField<FGuid*>(this, "FDerivedDataPhysXCooker.DataGuid"); }
	FString& MeshIdField() { return *GetNativePointerField<FString*>(this, "FDerivedDataPhysXCooker.MeshId"); }

	// Functions

	bool Build(TArray<unsigned char> * OutData) { return NativeCall<bool, TArray<unsigned char> *>(this, "FDerivedDataPhysXCooker.Build", OutData); }
	int BuildConvex(TArray<unsigned char> * OutData, bool InMirrored) { return NativeCall<int, TArray<unsigned char> *, bool>(this, "FDerivedDataPhysXCooker.BuildConvex", OutData, InMirrored); }
	bool BuildTriMesh(TArray<unsigned char> * OutData, bool bInMirrored, bool InUseAllTriData) { return NativeCall<bool, TArray<unsigned char> *, bool, bool>(this, "FDerivedDataPhysXCooker.BuildTriMesh", OutData, bInMirrored, InUseAllTriData); }
	const wchar_t * GetPluginName() { return NativeCall<const wchar_t *>(this, "FDerivedDataPhysXCooker.GetPluginName"); }
	FString * GetPluginSpecificCacheKeySuffix(FString * result) { return NativeCall<FString *, FString *>(this, "FDerivedDataPhysXCooker.GetPluginSpecificCacheKeySuffix", result); }
	const wchar_t * GetVersionString() { return NativeCall<const wchar_t *>(this, "FDerivedDataPhysXCooker.GetVersionString"); }
};

