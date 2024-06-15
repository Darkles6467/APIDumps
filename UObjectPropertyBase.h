#pragma once

#include "BaseDeclarations.h"
#include "UProperty.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UObjectPropertyBase : UProperty
{
	char __padding[0x8L];

	// Functions

	static unsigned __int64 StaticClassCastFlags() { return NativeCall<unsigned __int64>(nullptr, "UObjectPropertyBase.StaticClassCastFlags"); }
	void CopyCompleteValueFromScriptVM(void * Dest, const void * Src) { NativeCall<void, void *, const void *>(this, "UObjectPropertyBase.CopyCompleteValueFromScriptVM", Dest, Src); }
	void CopyCompleteValueToScriptVM(void * Dest, const void * Src) { NativeCall<void, void *, const void *>(this, "UObjectPropertyBase.CopyCompleteValueToScriptVM", Dest, Src); }
	void CopySingleValueFromScriptVM(void * Dest, const void * Src) { NativeCall<void, void *, const void *>(this, "UObjectPropertyBase.CopySingleValueFromScriptVM", Dest, Src); }
	void CopySingleValueToScriptVM(void * Dest, const void * Src) { NativeCall<void, void *, const void *>(this, "UObjectPropertyBase.CopySingleValueToScriptVM", Dest, Src); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UObjectPropertyBase.AddReferencedObjects", InThis, Collector); }
	void CheckValidObject(void * Value) { NativeCall<void, void *>(this, "UObjectPropertyBase.CheckValidObject", Value); }
	void ExportTextItem(FString * ValueStr, const void * PropertyValue, const void * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { NativeCall<void, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UObjectPropertyBase.ExportTextItem", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	FName * GetID(FName * result) { return NativeCall<FName *, FName *>(this, "UObjectPropertyBase.GetID", result); }
	bool Identical(const void * A, const void * B, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, unsigned int>(this, "UObjectPropertyBase.Identical", A, B, PortFlags); }
	const wchar_t * ImportText_Internal(const wchar_t * InBuffer, void * Data, int PortFlags, UObject * Parent, FOutputDevice * ErrorText) { return NativeCall<const wchar_t *, const wchar_t *, void *, int, UObject *, FOutputDevice *>(this, "UObjectPropertyBase.ImportText_Internal", InBuffer, Data, PortFlags, Parent, ErrorText); }
	void InstanceSubobjects(void * Data, const void * DefaultData, UObject * Owner, FObjectInstancingGraph * InstanceGraph) { NativeCall<void, void *, const void *, UObject *, FObjectInstancingGraph *>(this, "UObjectPropertyBase.InstanceSubobjects", Data, DefaultData, Owner, InstanceGraph); }
	bool NetSerializeItem(FArchive * Ar, UPackageMap * Map, void * Data, TArray<unsigned char> * MetaData) { return NativeCall<bool, FArchive *, UPackageMap *, void *, TArray<unsigned char> *>(this, "UObjectPropertyBase.NetSerializeItem", Ar, Map, Data, MetaData); }
	static bool ParseObjectPropertyValue(const UProperty * Property, UObject * OwnerObject, UClass * RequiredMetaClass, unsigned int PortFlags, const wchar_t ** Buffer, UObject ** out_ResolvedValue) { return NativeCall<bool, const UProperty *, UObject *, UClass *, unsigned int, const wchar_t **, UObject **>(nullptr, "UObjectPropertyBase.ParseObjectPropertyValue", Property, OwnerObject, RequiredMetaClass, PortFlags, Buffer, out_ResolvedValue); }
};

