#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactory.h"

struct FLocalVertexFactory : FVertexFactory
{
	char __padding[0x98L];

	// Functions

	void DataType() { NativeCall<void>(this, "FLocalVertexFactory.DataType"); }
	void DataType() { NativeCall<void>(this, "FLocalVertexFactory.DataType"); }
	void InitRHI() { NativeCall<void>(this, "FLocalVertexFactory.InitRHI"); }
	void SetData(const FLocalVertexFactory::DataType * InData) { NativeCall<void, const FLocalVertexFactory::DataType *>(this, "FLocalVertexFactory.SetData", InData); }
	static bool ShouldLoadInShipping(EShaderPlatform Platform, FMaterial * Material) { return NativeCall<bool, EShaderPlatform, FMaterial *>(nullptr, "FLocalVertexFactory.ShouldLoadInShipping", Platform, Material); }
};

