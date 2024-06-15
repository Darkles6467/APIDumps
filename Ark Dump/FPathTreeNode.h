#pragma once

#include "BaseDeclarations.h"
struct FPathTreeNode
{
	char __padding[0x20L];
	FString& FolderNameField() { return *GetNativePointerField<FString*>(this, "FPathTreeNode.FolderName"); }
	TArray<FPathTreeNode *>& ChildrenField() { return *GetNativePointerField<TArray<FPathTreeNode *>*>(this, "FPathTreeNode.Children"); }

	// Functions

	bool CachePath(const FString * Path) { return NativeCall<bool, const FString *>(this, "FPathTreeNode.CachePath", Path); }
	bool CachePath_Recursive(TArray<FString> * PathElements) { return NativeCall<bool, TArray<FString> *>(this, "FPathTreeNode.CachePath_Recursive", PathElements); }
	const FPathTreeNode * FindNode_Recursive(TArray<FString> * PathElements) { return NativeCall<const FPathTreeNode *, TArray<FString> *>(this, "FPathTreeNode.FindNode_Recursive", PathElements); }
	bool GetSubPaths(const FString * BasePath, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * OutPaths, bool bRecurse) { return NativeCall<bool, const FString *, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *, bool>(this, "FPathTreeNode.GetSubPaths", BasePath, OutPaths, bRecurse); }
	void GetSubPaths_Recursive(const FString * CurrentPath, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * OutPaths, bool bRecurse) { NativeCall<void, const FString *, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *, bool>(this, "FPathTreeNode.GetSubPaths_Recursive", CurrentPath, OutPaths, bRecurse); }
	bool RemoveFolder(const FString * Path) { return NativeCall<bool, const FString *>(this, "FPathTreeNode.RemoveFolder", Path); }
	bool RemoveFolder_Recursive(TArray<FString> * PathElements) { return NativeCall<bool, TArray<FString> *>(this, "FPathTreeNode.RemoveFolder_Recursive", PathElements); }
};

