#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FShader : FDeferredCleanupInterface
{
	char __padding[0xa8L];
	TArray<FUniformBufferStruct *>& UniformBufferParameterStructsField() { return *GetNativePointerField<TArray<FUniformBufferStruct *>*>(this, "FShader.UniformBufferParameterStructs"); }
	FSHAHash& OutputHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShader.OutputHash"); }
	FSHAHash& MaterialShaderMapHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShader.MaterialShaderMapHash"); }
	FSHAHash& VFSourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShader.VFSourceHash"); }
	FSHAHash& SourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShader.SourceHash"); }
	unsigned int& NumRefsField() { return *GetNativePointerField<unsigned int*>(this, "FShader.NumRefs"); }
	FSetElementId& CodeMapIdField() { return *GetNativePointerField<FSetElementId*>(this, "FShader.CodeMapId"); }
	unsigned int& SetParametersIdField() { return *GetNativePointerField<unsigned int*>(this, "FShader.SetParametersId"); }
	unsigned int& CanaryField() { return *GetNativePointerField<unsigned int*>(this, "FShader.Canary"); }

	// Functions

	void AddRef() { NativeCall<void>(this, "FShader.AddRef"); }
	void Deregister() { NativeCall<void>(this, "FShader.Deregister"); }
	unsigned int GetAllocatedSize() { return NativeCall<unsigned int>(this, "FShader.GetAllocatedSize"); }
	void Register() { NativeCall<void>(this, "FShader.Register"); }
	void Release() { NativeCall<void>(this, "FShader.Release"); }
	bool SerializeBase(FArchive * Ar, bool bShadersInline) { return NativeCall<bool, FArchive *, bool>(this, "FShader.SerializeBase", Ar, bShadersInline); }
};

