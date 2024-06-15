#pragma once

#include "BaseDeclarations.h"
struct FSelfContainedShaderId
{
	char __padding[0xc0L];
	FSHAHash& MaterialShaderMapHashField() { return *GetNativePointerField<FSHAHash*>(this, "FSelfContainedShaderId.MaterialShaderMapHash"); }
	FString& VertexFactoryTypeNameField() { return *GetNativePointerField<FString*>(this, "FSelfContainedShaderId.VertexFactoryTypeName"); }
	FSHAHash& VFSourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FSelfContainedShaderId.VFSourceHash"); }
	FSerializationHistory& VFSerializationHistoryField() { return *GetNativePointerField<FSerializationHistory*>(this, "FSelfContainedShaderId.VFSerializationHistory"); }
	FString& ShaderTypeNameField() { return *GetNativePointerField<FString*>(this, "FSelfContainedShaderId.ShaderTypeName"); }
	FSHAHash& SourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FSelfContainedShaderId.SourceHash"); }
	FSerializationHistory& SerializationHistoryField() { return *GetNativePointerField<FSerializationHistory*>(this, "FSelfContainedShaderId.SerializationHistory"); }

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "FSelfContainedShaderId.IsValid"); }
};

