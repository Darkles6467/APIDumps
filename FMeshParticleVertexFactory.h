#pragma once

#include "BaseDeclarations.h"
#include "FParticleVertexFactoryBase.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FMeshParticleVertexFactory : FParticleVertexFactoryBase
{
	char __padding[0x110L];
	FMeshParticleVertexFactory::DataType& DataField() { return *GetNativePointerField<FMeshParticleVertexFactory::DataType*>(this, "FMeshParticleVertexFactory.Data"); }
	int& DynamicVertexStrideField() { return *GetNativePointerField<int*>(this, "FMeshParticleVertexFactory.DynamicVertexStride"); }
	int& DynamicParameterVertexStrideField() { return *GetNativePointerField<int*>(this, "FMeshParticleVertexFactory.DynamicParameterVertexStride"); }

	// Functions

	FMeshParticleVertexFactory::DataType * DataType(const FMeshParticleVertexFactory::DataType * __that) { return NativeCall<FMeshParticleVertexFactory::DataType *, const FMeshParticleVertexFactory::DataType *>(this, "FMeshParticleVertexFactory.DataType", __that); }
	void InitRHI() { NativeCall<void>(this, "FMeshParticleVertexFactory.InitRHI"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FMeshParticleVertexFactory.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	void SetData(const FMeshParticleVertexFactory::DataType * InData) { NativeCall<void, const FMeshParticleVertexFactory::DataType *>(this, "FMeshParticleVertexFactory.SetData", InData); }
	void SetDynamicParameterBuffer(const FVertexBuffer * InDynamicParameterBuffer, unsigned int StreamOffset, unsigned int Stride) { NativeCall<void, const FVertexBuffer *, unsigned int, unsigned int>(this, "FMeshParticleVertexFactory.SetDynamicParameterBuffer", InDynamicParameterBuffer, StreamOffset, Stride); }
	void SetInstanceBuffer(const FVertexBuffer * InstanceBuffer, unsigned int StreamOffset, unsigned int Stride) { NativeCall<void, const FVertexBuffer *, unsigned int, unsigned int>(this, "FMeshParticleVertexFactory.SetInstanceBuffer", InstanceBuffer, StreamOffset, Stride); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FMeshParticleVertexFactory.ShouldCache", Platform, Material, ShaderType); }
};

