#pragma once

#include "BaseDeclarations.h"
struct FDirectoryTreeCopyProgress
{
	char __padding[0x8078L];
	bool& bBeginCopyField() { return *GetNativePointerField<bool*>(this, "FDirectoryTreeCopyProgress.bBeginCopy"); }
	FString& DestDirField() { return *GetNativePointerField<FString*>(this, "FDirectoryTreeCopyProgress.DestDir"); }
	FString& SourceDirField() { return *GetNativePointerField<FString*>(this, "FDirectoryTreeCopyProgress.SourceDir"); }
	TArray<FString>& FilesField() { return *GetNativePointerField<TArray<FString>*>(this, "FDirectoryTreeCopyProgress.Files"); }
	int& CurrentFileIndexField() { return *GetNativePointerField<int*>(this, "FDirectoryTreeCopyProgress.CurrentFileIndex"); }
	FString& CurrentDestFileField() { return *GetNativePointerField<FString*>(this, "FDirectoryTreeCopyProgress.CurrentDestFile"); }
	FString& CurrentSrcFileField() { return *GetNativePointerField<FString*>(this, "FDirectoryTreeCopyProgress.CurrentSrcFile"); }
	__int64& CurrentTotalField() { return *GetNativePointerField<__int64*>(this, "FDirectoryTreeCopyProgress.CurrentTotal"); }
	FieldArray<char, 32768> BufferField() { return {this, "FDirectoryTreeCopyProgress.Buffer"}; }

	// Functions

};

