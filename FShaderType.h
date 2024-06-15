#pragma once

#include "BaseDeclarations.h"
struct FShaderType
{
	char __padding[0x138L];
	unsigned int& HashIndexField() { return *GetNativePointerField<unsigned int*>(this, "FShaderType.HashIndex"); }
	const wchar_t * NameField() { return GetNativePointerField<const wchar_t *>(this, "FShaderType.Name"); }
	const wchar_t * SourceFilenameField() { return GetNativePointerField<const wchar_t *>(this, "FShaderType.SourceFilename"); }
	const wchar_t * FunctionNameField() { return GetNativePointerField<const wchar_t *>(this, "FShaderType.FunctionName"); }
	unsigned int& FrequencyField() { return *GetNativePointerField<unsigned int*>(this, "FShaderType.Frequency"); }
	FieldArray<bool, 28> bCachedUniformBufferStructDeclarationsField() { return {this, "FShaderType.bCachedUniformBufferStructDeclarations"}; }
	FSerializationHistory& SerializationHistoryField() { return *GetNativePointerField<FSerializationHistory*>(this, "FShaderType.SerializationHistory"); }

	// Functions

	static void GetOutdatedTypes(TArray<FShaderType *> * OutdatedShaderTypes, TArray<FVertexFactoryType const *> * OutdatedFactoryTypes) { NativeCall<void, TArray<FShaderType *> *, TArray<FVertexFactoryType const *> *>(nullptr, "FShaderType.GetOutdatedTypes", OutdatedShaderTypes, OutdatedFactoryTypes); }
	const FSHAHash * GetSourceHash() { return NativeCall<const FSHAHash *>(this, "FShaderType.GetSourceHash"); }
};

