#pragma once

#include "BaseDeclarations.h"
struct FVertexFactoryType
{
	char __padding[0x1d0L];
	unsigned int& HashIndexField() { return *GetNativePointerField<unsigned int*>(this, "FVertexFactoryType.HashIndex"); }
	const wchar_t * NameField() { return GetNativePointerField<const wchar_t *>(this, "FVertexFactoryType.Name"); }
	const wchar_t * ShaderFilenameField() { return GetNativePointerField<const wchar_t *>(this, "FVertexFactoryType.ShaderFilename"); }
	FName& TypeNameField() { return *GetNativePointerField<FName*>(this, "FVertexFactoryType.TypeName"); }
	FieldArray<bool, 28> bCachedUniformBufferStructDeclarationsField() { return {this, "FVertexFactoryType.bCachedUniformBufferStructDeclarations"}; }
	FieldArray<FSerializationHistory, 6> SerializationHistoryField() { return {this, "FVertexFactoryType.SerializationHistory"}; }

	// Functions

};

