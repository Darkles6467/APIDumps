#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FUniformExpressionSet : FRefCountedObject
{
	char __padding[0x58L];
	TArray<FGuid>& ParameterCollectionsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FUniformExpressionSet.ParameterCollections"); }
	TScopedPointer<FUniformBufferStruct>& UniformBufferStructField() { return *GetNativePointerField<TScopedPointer<FUniformBufferStruct>*>(this, "FUniformExpressionSet.UniformBufferStruct"); }

	// Functions

	void CreateBufferStruct() { NativeCall<void>(this, "FUniformExpressionSet.CreateBufferStruct"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FUniformExpressionSet.Serialize", Ar); }
};

