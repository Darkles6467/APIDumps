#pragma once

#include "BaseDeclarations.h"
struct FEngineVersion
{
	char __padding[0x20L];
	unsigned __int16& MajorField() { return *GetNativePointerField<unsigned __int16*>(this, "FEngineVersion.Major"); }
	unsigned __int16& MinorField() { return *GetNativePointerField<unsigned __int16*>(this, "FEngineVersion.Minor"); }
	unsigned __int16& PatchField() { return *GetNativePointerField<unsigned __int16*>(this, "FEngineVersion.Patch"); }
	unsigned int& ChangelistField() { return *GetNativePointerField<unsigned int*>(this, "FEngineVersion.Changelist"); }
	FString& BranchField() { return *GetNativePointerField<FString*>(this, "FEngineVersion.Branch"); }

	// Functions

	unsigned int GetChangelist() { return NativeCall<unsigned int>(this, "FEngineVersion.GetChangelist"); }
	bool IsCompatibleWith(const FEngineVersion * Other) { return NativeCall<bool, const FEngineVersion *>(this, "FEngineVersion.IsCompatibleWith", Other); }
	bool IsPromotedBuild() { return NativeCall<bool>(this, "FEngineVersion.IsPromotedBuild"); }
	void Set(unsigned __int16 InMajor, unsigned __int16 InMinor, unsigned __int16 InPatch, unsigned int InChangelist, const FString * InBranch) { NativeCall<void, unsigned __int16, unsigned __int16, unsigned __int16, unsigned int, const FString *>(this, "FEngineVersion.Set", InMajor, InMinor, InPatch, InChangelist, InBranch); }
	FString * ToString(FString * result, EVersionComponent::Type LastComponent) { return NativeCall<FString *, FString *, EVersionComponent::Type>(this, "FEngineVersion.ToString", result, LastComponent); }
};

