#pragma once

#include "BaseDeclarations.h"
struct FPropertyTag
{
	char __padding[0x38L];
	FName& TypeField() { return *GetNativePointerField<FName*>(this, "FPropertyTag.Type"); }
	char& BoolValField() { return *GetNativePointerField<char*>(this, "FPropertyTag.BoolVal"); }
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FPropertyTag.Name"); }
	FName& StructNameField() { return *GetNativePointerField<FName*>(this, "FPropertyTag.StructName"); }
	FName& EnumNameField() { return *GetNativePointerField<FName*>(this, "FPropertyTag.EnumName"); }
	FName& InnerTypeField() { return *GetNativePointerField<FName*>(this, "FPropertyTag.InnerType"); }
	int& SizeField() { return *GetNativePointerField<int*>(this, "FPropertyTag.Size"); }
	int& ArrayIndexField() { return *GetNativePointerField<int*>(this, "FPropertyTag.ArrayIndex"); }
	int& SizeOffsetField() { return *GetNativePointerField<int*>(this, "FPropertyTag.SizeOffset"); }

	// Functions

	void SerializeTaggedProperty(FArchive * Ar, UProperty * Property, char * Value, int MaxReadBytes, char * Defaults) { NativeCall<void, FArchive *, UProperty *, char *, int, char *>(this, "FPropertyTag.SerializeTaggedProperty", Ar, Property, Value, MaxReadBytes, Defaults); }
};

