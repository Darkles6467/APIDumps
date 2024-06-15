#pragma once

#include "BaseDeclarations.h"
struct FExternalToolDefinition
{
	char __padding[0x60L];
	FString& ToolNameField() { return *GetNativePointerField<FString*>(this, "FExternalToolDefinition.ToolName"); }
	FFilePath& ExecutablePathField() { return *GetNativePointerField<FFilePath*>(this, "FExternalToolDefinition.ExecutablePath"); }
	FString& CommandLineOptionsField() { return *GetNativePointerField<FString*>(this, "FExternalToolDefinition.CommandLineOptions"); }
	FDirectoryPath& WorkingDirectoryField() { return *GetNativePointerField<FDirectoryPath*>(this, "FExternalToolDefinition.WorkingDirectory"); }
	FString& ScriptExtensionField() { return *GetNativePointerField<FString*>(this, "FExternalToolDefinition.ScriptExtension"); }
	FDirectoryPath& ScriptDirectoryField() { return *GetNativePointerField<FDirectoryPath*>(this, "FExternalToolDefinition.ScriptDirectory"); }

	// Functions

	FExternalToolDefinition * operator=(const FExternalToolDefinition * __that) { return NativeCall<FExternalToolDefinition *, const FExternalToolDefinition *>(this, "FExternalToolDefinition.operator=", __that); }
};

