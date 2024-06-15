#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FMaterialShaderMap : FDeferredCleanupInterface
{
	char __padding[0x220L];
	FString& FriendlyNameField() { return *GetNativePointerField<FString*>(this, "FMaterialShaderMap.FriendlyName"); }
	EShaderPlatform& PlatformField() { return *GetNativePointerField<EShaderPlatform*>(this, "FMaterialShaderMap.Platform"); }
	unsigned int& CompilingIdField() { return *GetNativePointerField<unsigned int*>(this, "FMaterialShaderMap.CompilingId"); }
	unsigned int& NumRefsField() { return *GetNativePointerField<unsigned int*>(this, "FMaterialShaderMap.NumRefs"); }
	bool& bDeletedThroughDeferredCleanupField() { return *GetNativePointerField<bool*>(this, "FMaterialShaderMap.bDeletedThroughDeferredCleanup"); }
	FString& DebugDescriptionField() { return *GetNativePointerField<FString*>(this, "FMaterialShaderMap.DebugDescription"); }

	// Functions

	void AddRef() { NativeCall<void>(this, "FMaterialShaderMap.AddRef"); }
	TArray<unsigned char> * BackupShadersToMemory() { return NativeCall<TArray<unsigned char> *>(this, "FMaterialShaderMap.BackupShadersToMemory"); }
	void FinishCleanup() { NativeCall<void>(this, "FMaterialShaderMap.FinishCleanup"); }
	static void FixupShaderTypes(EShaderPlatform Platform, const TMap<FShaderType *,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FShaderType *,FString,0> > * ShaderTypeNames, const TMap<FVertexFactoryType *,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FVertexFactoryType *,FString,0> > * VertexFactoryTypeNames) { NativeCall<void, EShaderPlatform, const TMap<FShaderType *,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FShaderType *,FString,0> > *, const TMap<FVertexFactoryType *,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FVertexFactoryType *,FString,0> > *>(nullptr, "FMaterialShaderMap.FixupShaderTypes", Platform, ShaderTypeNames, VertexFactoryTypeNames); }
	static void FlushShaderTypes(TArray<FShaderType *> * ShaderTypesToFlush, TArray<FVertexFactoryType const *> * VFTypesToFlush) { NativeCall<void, TArray<FShaderType *> *, TArray<FVertexFactoryType const *> *>(nullptr, "FMaterialShaderMap.FlushShaderTypes", ShaderTypesToFlush, VFTypesToFlush); }
	void FlushShadersByShaderType(FShaderType * ShaderType) { NativeCall<void, FShaderType *>(this, "FMaterialShaderMap.FlushShadersByShaderType", ShaderType); }
	void FlushShadersByVertexFactoryType(const FVertexFactoryType * VertexFactoryType) { NativeCall<void, const FVertexFactoryType *>(this, "FMaterialShaderMap.FlushShadersByVertexFactoryType", VertexFactoryType); }
	unsigned int GetSizeBytes() { return NativeCall<unsigned int>(this, "FMaterialShaderMap.GetSizeBytes"); }
	bool IsComplete(FMaterial * Material, bool bSilent) { return NativeCall<bool, FMaterial *, bool>(this, "FMaterialShaderMap.IsComplete", Material, bSilent); }
	bool ProcessCompilationResults(const TArray<FShaderCompileJob *> * InCompilationResults, int * InOutJobIndex, float * TimeBudget) { return NativeCall<bool, const TArray<FShaderCompileJob *> *, int *, float *>(this, "FMaterialShaderMap.ProcessCompilationResults", InCompilationResults, InOutJobIndex, TimeBudget); }
	void Register(EShaderPlatform InShaderPlatform) { NativeCall<void, EShaderPlatform>(this, "FMaterialShaderMap.Register", InShaderPlatform); }
	void Release() { NativeCall<void>(this, "FMaterialShaderMap.Release"); }
	static void RemovePendingMaterial(FMaterial * Material) { NativeCall<void, FMaterial *>(nullptr, "FMaterialShaderMap.RemovePendingMaterial", Material); }
	void RestoreShadersFromMemory(const TArray<unsigned char> * ShaderData) { NativeCall<void, const TArray<unsigned char> *>(this, "FMaterialShaderMap.RestoreShadersFromMemory", ShaderData); }
	void SaveToDerivedDataCache() { NativeCall<void>(this, "FMaterialShaderMap.SaveToDerivedDataCache"); }
	void Serialize(FArchive * Ar, bool bInlineShaderResources) { NativeCall<void, FArchive *, bool>(this, "FMaterialShaderMap.Serialize", Ar, bInlineShaderResources); }
};

