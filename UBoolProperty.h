#pragma once

#include "BaseDeclarations.h"
#include "UProperty.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBoolProperty : UProperty
{
	char __padding[0x8L];
	char& FieldSizeField() { return *GetNativePointerField<char*>(this, "UBoolProperty.FieldSize"); }
	char& ByteOffsetField() { return *GetNativePointerField<char*>(this, "UBoolProperty.ByteOffset"); }
	char& ByteMaskField() { return *GetNativePointerField<char*>(this, "UBoolProperty.ByteMask"); }
	char& FieldMaskField() { return *GetNativePointerField<char*>(this, "UBoolProperty.FieldMask"); }

	// Functions

	static unsigned __int64 StaticClassCastFlags() { return NativeCall<unsigned __int64>(nullptr, "UBoolProperty.StaticClassCastFlags"); }
	static void * operator new(const unsigned __int64 InSize, UObject * InOuter, FName InName, EObjectFlags InSetFlags) { return NativeCall<void *, const unsigned __int64, UObject *, FName, EObjectFlags>(nullptr, "UBoolProperty.operator new", InSize, InOuter, InName, InSetFlags); }
	void ClearValueInternal(void * Data) { NativeCall<void, void *>(this, "UBoolProperty.ClearValueInternal", Data); }
	void CopyValuesInternal(void * Dest, const void * Src, int Count) { NativeCall<void, void *, const void *, int>(this, "UBoolProperty.CopyValuesInternal", Dest, Src, Count); }
	void ExportTextItem(FString * ValueStr, const void * PropertyValue, const void * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { NativeCall<void, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UBoolProperty.ExportTextItem", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	FString * GetCPPMacroType(FString * result, FString * ExtendedTypeText) { return NativeCall<FString *, FString *, FString *>(this, "UBoolProperty.GetCPPMacroType", result, ExtendedTypeText); }
	FString * GetCPPType(FString * result, FString * ExtendedTypeText, unsigned int CPPExportFlags) { return NativeCall<FString *, FString *, FString *, unsigned int>(this, "UBoolProperty.GetCPPType", result, ExtendedTypeText, CPPExportFlags); }
	int GetMinAlignment() { return NativeCall<int>(this, "UBoolProperty.GetMinAlignment"); }
	bool Identical(const void * A, const void * B, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, unsigned int>(this, "UBoolProperty.Identical", A, B, PortFlags); }
	const wchar_t * ImportText_Internal(const wchar_t * Buffer, void * Data, int PortFlags, UObject * Parent, FOutputDevice * ErrorText) { return NativeCall<const wchar_t *, const wchar_t *, void *, int, UObject *, FOutputDevice *>(this, "UBoolProperty.ImportText_Internal", Buffer, Data, PortFlags, Parent, ErrorText); }
	void LinkInternal(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UBoolProperty.LinkInternal", Ar); }
	bool NetSerializeItem(FArchive * Ar, UPackageMap * Map, void * Data, TArray<unsigned char> * MetaData) { return NativeCall<bool, FArchive *, UPackageMap *, void *, TArray<unsigned char> *>(this, "UBoolProperty.NetSerializeItem", Ar, Map, Data, MetaData); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UBoolProperty.Serialize", Ar); }
	void SerializeItem(FArchive * Ar, void * Value, int MaxReadBytes, const void * Defaults) { NativeCall<void, FArchive *, void *, int, const void *>(this, "UBoolProperty.SerializeItem", Ar, Value, MaxReadBytes, Defaults); }
	void SetBoolSize(const unsigned int InSize, const bool bIsNativeBool, const unsigned int InBitMask) { NativeCall<void, const unsigned int, const bool, const unsigned int>(this, "UBoolProperty.SetBoolSize", InSize, bIsNativeBool, InBitMask); }
};

