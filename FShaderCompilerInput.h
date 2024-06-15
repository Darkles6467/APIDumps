#pragma once

#include "BaseDeclarations.h"
struct FShaderCompilerInput
{
	char __padding[0x220L];
	FName& ShaderFormatField() { return *GetNativePointerField<FName*>(this, "FShaderCompilerInput.ShaderFormat"); }
	FString& SourceFilePrefixField() { return *GetNativePointerField<FString*>(this, "FShaderCompilerInput.SourceFilePrefix"); }
	FString& SourceFilenameField() { return *GetNativePointerField<FString*>(this, "FShaderCompilerInput.SourceFilename"); }
	FString& EntryPointNameField() { return *GetNativePointerField<FString*>(this, "FShaderCompilerInput.EntryPointName"); }
	bool& bSkipPreprocessedCacheField() { return *GetNativePointerField<bool*>(this, "FShaderCompilerInput.bSkipPreprocessedCache"); }
	FString& DumpDebugInfoRootPathField() { return *GetNativePointerField<FString*>(this, "FShaderCompilerInput.DumpDebugInfoRootPath"); }
	FString& DumpDebugInfoPathField() { return *GetNativePointerField<FString*>(this, "FShaderCompilerInput.DumpDebugInfoPath"); }
};

