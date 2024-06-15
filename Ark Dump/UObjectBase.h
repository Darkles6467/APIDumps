#pragma once

#include "BaseDeclarations.h"
struct UObjectBase
{
	char __padding[0x28L];
	EObjectFlags& ObjectFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "UObjectBase.ObjectFlags"); }
	int& InternalIndexField() { return *GetNativePointerField<int*>(this, "UObjectBase.InternalIndex"); }
	FName& NameField() { return *GetNativePointerField<FName*>(this, "UObjectBase.Name"); }

	// Functions

	void DeferredRegister(UClass * UClassStaticClass, const wchar_t * PackageName, const wchar_t * InName) { NativeCall<void, UClass *, const wchar_t *, const wchar_t *>(this, "UObjectBase.DeferredRegister", UClassStaticClass, PackageName, InName); }
	bool DoesObjectWantToLoadFromSaveGame() { return NativeCall<bool>(this, "UObjectBase.DoesObjectWantToLoadFromSaveGame"); }
	static void EmitBaseReferences(UClass * RootClass) { NativeCall<void, UClass *>(nullptr, "UObjectBase.EmitBaseReferences", RootClass); }
	bool IsValidLowLevel() { return NativeCall<bool>(this, "UObjectBase.IsValidLowLevel"); }
	bool IsValidLowLevelFast(bool bRecursive) { return NativeCall<bool, bool>(this, "UObjectBase.IsValidLowLevelFast", bRecursive); }
	void LowLevelRename(FName NewName, UObject * NewOuter) { NativeCall<void, FName, UObject *>(this, "UObjectBase.LowLevelRename", NewName, NewOuter); }
	void Register(const wchar_t * PackageName, const wchar_t * InName) { NativeCall<void, const wchar_t *, const wchar_t *>(this, "UObjectBase.Register", PackageName, InName); }
};

