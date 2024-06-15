#pragma once

#include "BaseDeclarations.h"
#include "UProperty.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UStructProperty : UProperty
{
	char __padding[0x8L];

	// Functions

	static void * operator new(const unsigned __int64 InSize, UObject * InOuter, FName InName, EObjectFlags InSetFlags) { return NativeCall<void *, const unsigned __int64, UObject *, FName, EObjectFlags>(nullptr, "UStructProperty.operator new", InSize, InOuter, InName, InSetFlags); }
	bool ContainsObjectReference() { return NativeCall<bool>(this, "UStructProperty.ContainsObjectReference"); }
	bool ContainsWeakObjectReference() { return NativeCall<bool>(this, "UStructProperty.ContainsWeakObjectReference"); }
	void EmitReferenceInfo(UClass * OwnerClass, int BaseOffset) { NativeCall<void, UClass *, int>(this, "UStructProperty.EmitReferenceInfo", OwnerClass, BaseOffset); }
	void ClearValueInternal(void * Data) { NativeCall<void, void *>(this, "UStructProperty.ClearValueInternal", Data); }
	void CopyValuesInternal(void * Dest, const void * Src, int Count) { NativeCall<void, void *, const void *, int>(this, "UStructProperty.CopyValuesInternal", Dest, Src, Count); }
	void DestroyValueInternal(void * Dest) { NativeCall<void, void *>(this, "UStructProperty.DestroyValueInternal", Dest); }
	void ExportTextItem(FString * ValueStr, const void * PropertyValue, const void * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { NativeCall<void, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UStructProperty.ExportTextItem", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	FString * GetCPPMacroType(FString * result, FString * ExtendedTypeText) { return NativeCall<FString *, FString *, FString *>(this, "UStructProperty.GetCPPMacroType", result, ExtendedTypeText); }
	FString * GetCPPType(FString * result, FString * ExtendedTypeText, unsigned int CPPExportFlags) { return NativeCall<FString *, FString *, FString *, unsigned int>(this, "UStructProperty.GetCPPType", result, ExtendedTypeText, CPPExportFlags); }
	int GetMinAlignment() { return NativeCall<int>(this, "UStructProperty.GetMinAlignment"); }
	bool Identical(const void * A, const void * B, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, unsigned int>(this, "UStructProperty.Identical", A, B, PortFlags); }
	const wchar_t * ImportText_Internal(const wchar_t * InBuffer, void * Data, int PortFlags, UObject * Parent, FOutputDevice * ErrorText) { return NativeCall<const wchar_t *, const wchar_t *, void *, int, UObject *, FOutputDevice *>(this, "UStructProperty.ImportText_Internal", InBuffer, Data, PortFlags, Parent, ErrorText); }
	void InitializeValueInternal(void * InDest) { NativeCall<void, void *>(this, "UStructProperty.InitializeValueInternal", InDest); }
	void InstanceSubobjects(void * Data, const void * DefaultData, UObject * Owner, FObjectInstancingGraph * InstanceGraph) { NativeCall<void, void *, const void *, UObject *, FObjectInstancingGraph *>(this, "UStructProperty.InstanceSubobjects", Data, DefaultData, Owner, InstanceGraph); }
	bool IsLocalized() { return NativeCall<bool>(this, "UStructProperty.IsLocalized"); }
	void LinkInternal(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UStructProperty.LinkInternal", Ar); }
	bool NetSerializeItem(FArchive * Ar, UPackageMap * Map, void * Data, TArray<unsigned char> * MetaData) { return NativeCall<bool, FArchive *, UPackageMap *, void *, TArray<unsigned char> *>(this, "UStructProperty.NetSerializeItem", Ar, Map, Data, MetaData); }
	bool SameType(const UProperty * Other) { return NativeCall<bool, const UProperty *>(this, "UStructProperty.SameType", Other); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UStructProperty.Serialize", Ar); }
	void SerializeItem(FArchive * Ar, void * Value, int MaxReadBytes, const void * Defaults) { NativeCall<void, FArchive *, void *, int, const void *>(this, "UStructProperty.SerializeItem", Ar, Value, MaxReadBytes, Defaults); }
	static void UStructProperty_ExportTextItem(UScriptStruct * InStruct, FString * ValueStr, const void * PropertyValue, const void * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { NativeCall<void, UScriptStruct *, FString *, const void *, const void *, UObject *, int, UObject *>(nullptr, "UStructProperty.UStructProperty_ExportTextItem", InStruct, ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	bool UseBinaryOrNativeSerialization(const FArchive * Ar) { return NativeCall<bool, const FArchive *>(this, "UStructProperty.UseBinaryOrNativeSerialization", Ar); }
};

