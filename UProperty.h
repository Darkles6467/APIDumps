#pragma once

#include "BaseDeclarations.h"
#include "UField.h"
#include "FDefinedProperty.h"

struct UProperty : UField
{
	char __padding[0x40L];
	int& ArrayDimField() { return *GetNativePointerField<int*>(this, "UProperty.ArrayDim"); }
	int& ElementSizeField() { return *GetNativePointerField<int*>(this, "UProperty.ElementSize"); }
	unsigned __int64& PropertyFlagsField() { return *GetNativePointerField<unsigned __int64*>(this, "UProperty.PropertyFlags"); }
	unsigned __int16& RepIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "UProperty.RepIndex"); }
	FName& RepNotifyFuncField() { return *GetNativePointerField<FName*>(this, "UProperty.RepNotifyFunc"); }
	int& Offset_InternalField() { return *GetNativePointerField<int*>(this, "UProperty.Offset_Internal"); }

	// Functions

	const wchar_t * ImportText(const wchar_t * Buffer, void * Data, int PortFlags, UObject * OwnerObject, FOutputDevice * ErrorText) { return NativeCall<const wchar_t *, const wchar_t *, void *, int, UObject *, FOutputDevice *>(this, "UProperty.ImportText", Buffer, Data, PortFlags, OwnerObject, ErrorText); }
	void CopyCompleteValueFromScriptVM(void * Dest, const void * Src) { NativeCall<void, void *, const void *>(this, "UProperty.CopyCompleteValueFromScriptVM", Dest, Src); }
	void CopySingleValueFromScriptVM(void * Dest, const void * Src) { NativeCall<void, void *, const void *>(this, "UProperty.CopySingleValueFromScriptVM", Dest, Src); }
	void ExportTextItem(FString * ValueStr, const void * PropertyValue, const void * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { NativeCall<void, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UProperty.ExportTextItem", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	FString * GetCPPType(FString * result, FString * ExtendedTypeText, unsigned int CPPExportFlags) { return NativeCall<FString *, FString *, FString *, unsigned int>(this, "UProperty.GetCPPType", result, ExtendedTypeText, CPPExportFlags); }
	bool Identical(const void * A, const void * B, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, unsigned int>(this, "UProperty.Identical", A, B, PortFlags); }
	const wchar_t * ImportText_Internal(const wchar_t * Buffer, void * Data, int PortFlags, UObject * OwnerObject, FOutputDevice * ErrorText) { return NativeCall<const wchar_t *, const wchar_t *, void *, int, UObject *, FOutputDevice *>(this, "UProperty.ImportText_Internal", Buffer, Data, PortFlags, OwnerObject, ErrorText); }
	void SerializeItem(FArchive * Ar, void * Value, int MaxReadBytes, const void * Defaults) { NativeCall<void, FArchive *, void *, int, const void *>(this, "UProperty.SerializeItem", Ar, Value, MaxReadBytes, Defaults); }
	bool Identical_InContainer(const void * A, const void * B, int ArrayIndex, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, int, unsigned int>(this, "UProperty.Identical_InContainer", A, B, ArrayIndex, PortFlags); }
	void SerializeNonMatchingBinProperty(FArchive * Ar, void * Data, const void * DefaultData, UStruct * DefaultStruct) { NativeCall<void, FArchive *, void *, const void *, UStruct *>(this, "UProperty.SerializeNonMatchingBinProperty", Ar, Data, DefaultData, DefaultStruct); }
	bool ExportText_Direct(FString * ValueStr, const void * Data, const void * Delta, UObject * Parent, int PortFlags, UObject * ExportRootScope) { return NativeCall<bool, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UProperty.ExportText_Direct", ValueStr, Data, Delta, Parent, PortFlags, ExportRootScope); }
	FString * GetCPPMacroType(FString * result, FString * ExtendedTypeText) { return NativeCall<FString *, FString *, FString *>(this, "UProperty.GetCPPMacroType", result, ExtendedTypeText); }
	FName * GetID(FName * result) { return NativeCall<FName *, FName *>(this, "UProperty.GetID", result); }
	static const wchar_t * ImportSingleProperty(const wchar_t * Str, void * DestData, UStruct * ObjectStruct, UObject * SubobjectOuter, int PortFlags, FOutputDevice * Warn, TArray<FDefinedProperty> * DefinedProperties) { return NativeCall<const wchar_t *, const wchar_t *, void *, UStruct *, UObject *, int, FOutputDevice *, TArray<FDefinedProperty> *>(nullptr, "UProperty.ImportSingleProperty", Str, DestData, ObjectStruct, SubobjectOuter, PortFlags, Warn, DefinedProperties); }
	bool IsLocalized() { return NativeCall<bool>(this, "UProperty.IsLocalized"); }
	bool NetSerializeItem(FArchive * Ar, UPackageMap * Map, void * Data, TArray<unsigned char> * MetaData) { return NativeCall<bool, FArchive *, UPackageMap *, void *, TArray<unsigned char> *>(this, "UProperty.NetSerializeItem", Ar, Map, Data, MetaData); }
	bool SameType(const UProperty * Other) { return NativeCall<bool, const UProperty *>(this, "UProperty.SameType", Other); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UProperty.Serialize", Ar); }
	int SetupOffset() { return NativeCall<int>(this, "UProperty.SetupOffset"); }
	bool ShouldPort(unsigned int PortFlags) { return NativeCall<bool, unsigned int>(this, "UProperty.ShouldPort", PortFlags); }
	bool ShouldSerializeValue(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "UProperty.ShouldSerializeValue", Ar); }
	bool ValidateImportFlags(unsigned int PortFlags, FOutputDevice * ErrorHandler) { return NativeCall<bool, unsigned int, FOutputDevice *>(this, "UProperty.ValidateImportFlags", PortFlags, ErrorHandler); }
};

