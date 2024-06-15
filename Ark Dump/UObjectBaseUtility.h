#pragma once

#include "BaseDeclarations.h"
#include "UObjectBase.h"

struct UObjectBaseUtility : UObjectBase
{

	// Functions

	FString * GetName(FString * result) { return NativeCall<FString *, FString *>(this, "UObjectBaseUtility.GetName", result); }
	int GetLinkerLicenseeUE4Version() { return NativeCall<int>(this, "UObjectBaseUtility.GetLinkerLicenseeUE4Version"); }
	int GetLinkerUE4Version() { return NativeCall<int>(this, "UObjectBaseUtility.GetLinkerUE4Version"); }
	FString * GetFullName(FString * result, UObject * StopOuter) { return NativeCall<FString *, FString *, UObject *>(this, "UObjectBaseUtility.GetFullName", result, StopOuter); }
	void * GetInterfaceAddress(UClass * InterfaceClass) { return NativeCall<void *, UClass *>(this, "UObjectBaseUtility.GetInterfaceAddress", InterfaceClass); }
	int GetLinkerIndex() { return NativeCall<int>(this, "UObjectBaseUtility.GetLinkerIndex"); }
	void * GetNativeInterfaceAddress(UClass * InterfaceClass) { return NativeCall<void *, UClass *>(this, "UObjectBaseUtility.GetNativeInterfaceAddress", InterfaceClass); }
	UPackage * GetOutermost() { return NativeCall<UPackage *>(this, "UObjectBaseUtility.GetOutermost"); }
	void GetPathName(UObject * StopOuter, FString * ResultString) { NativeCall<void, UObject *, FString *>(this, "UObjectBaseUtility.GetPathName", StopOuter, ResultString); }
	FString * GetPathName(FString * result, UObject * StopOuter) { return NativeCall<FString *, FString *, UObject *>(this, "UObjectBaseUtility.GetPathName", result, StopOuter); }
	bool IsA(const UClass * SomeBase) { return NativeCall<bool, const UClass *>(this, "UObjectBaseUtility.IsA", SomeBase); }
	bool IsDefaultSubobject() { return NativeCall<bool>(this, "UObjectBaseUtility.IsDefaultSubobject"); }
	bool IsIn(UObject * SomeOuter) { return NativeCall<bool, UObject *>(this, "UObjectBaseUtility.IsIn", SomeOuter); }
	bool IsTemplate(EObjectFlags TemplateTypes) { return NativeCall<bool, EObjectFlags>(this, "UObjectBaseUtility.IsTemplate", TemplateTypes); }
	void MarkPackageDirty() { NativeCall<void>(this, "UObjectBaseUtility.MarkPackageDirty"); }
};

