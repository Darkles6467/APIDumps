#pragma once

#include "BaseDeclarations.h"
struct FOpenGLLinkedProgram
{
	char __padding[0x4b0L];
	FOpenGLLinkedProgramConfiguration& ConfigField() { return *GetNativePointerField<FOpenGLLinkedProgramConfiguration*>(this, "FOpenGLLinkedProgram.Config"); }
	FieldArray<FOpenGLLinkedProgram::FStagePackedUniformInfo, 6> StagePackedUniformInfoField() { return {this, "FOpenGLLinkedProgram.StagePackedUniformInfo"}; }
	unsigned int& ProgramField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLLinkedProgram.Program"); }
	bool& bUsingTessellationField() { return *GetNativePointerField<bool*>(this, "FOpenGLLinkedProgram.bUsingTessellation"); }
	int& MaxTextureStageField() { return *GetNativePointerField<int*>(this, "FOpenGLLinkedProgram.MaxTextureStage"); }
	TArray<FOpenGLBindlessSamplerInfo>& SamplersField() { return *GetNativePointerField<TArray<FOpenGLBindlessSamplerInfo>*>(this, "FOpenGLLinkedProgram.Samplers"); }

	// Functions

	void FStagePackedUniformInfo() { NativeCall<void>(this, "FOpenGLLinkedProgram.FStagePackedUniformInfo"); }
	void ConfigureShaderStage(int Stage, unsigned int FirstUniformBuffer) { NativeCall<void, int, unsigned int>(this, "FOpenGLLinkedProgram.ConfigureShaderStage", Stage, FirstUniformBuffer); }
	static void SortPackedUniformInfos(const TArray<FOpenGLLinkedProgram::FPackedUniformInfo> * ReflectedUniformInfos, const TArray<CrossCompiler::FPackedArrayInfo> * PackedGlobalArrays, TArray<FOpenGLLinkedProgram::FPackedUniformInfo> * OutPackedUniformInfos) { NativeCall<void, const TArray<FOpenGLLinkedProgram::FPackedUniformInfo> *, const TArray<CrossCompiler::FPackedArrayInfo> *, TArray<FOpenGLLinkedProgram::FPackedUniformInfo> *>(nullptr, "FOpenGLLinkedProgram.SortPackedUniformInfos", ReflectedUniformInfos, PackedGlobalArrays, OutPackedUniformInfos); }
};

