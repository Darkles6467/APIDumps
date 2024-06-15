#pragma once

#include "BaseDeclarations.h"
struct FOpenGLLinkedProgramConfiguration
{
	char __padding[0x330L];
	FieldArray<FOpenGLLinkedProgramConfiguration::ShaderInfo, 6> ShadersField() { return {this, "FOpenGLLinkedProgramConfiguration.Shaders"}; }

	// Functions

	void ShaderInfo(const FOpenGLLinkedProgramConfiguration::ShaderInfo * __that) { NativeCall<void, const FOpenGLLinkedProgramConfiguration::ShaderInfo *>(this, "FOpenGLLinkedProgramConfiguration.ShaderInfo", __that); }
	void ShaderInfo() { NativeCall<void>(this, "FOpenGLLinkedProgramConfiguration.ShaderInfo"); }
	void ShaderInfo() { NativeCall<void>(this, "FOpenGLLinkedProgramConfiguration.ShaderInfo"); }
	FOpenGLLinkedProgramConfiguration * operator=(const FOpenGLLinkedProgramConfiguration * __that) { return NativeCall<FOpenGLLinkedProgramConfiguration *, const FOpenGLLinkedProgramConfiguration *>(this, "FOpenGLLinkedProgramConfiguration.operator=", __that); }
};

