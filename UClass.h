#pragma once

#include "BaseDeclarations.h"
#include "UStruct.h"

struct UClass : UStruct
{
	char __padding[0xf8L];
	unsigned int& ClassFlagsField() { return *GetNativePointerField<unsigned int*>(this, "UClass.ClassFlags"); }
	unsigned __int64& ClassCastFlagsField() { return *GetNativePointerField<unsigned __int64*>(this, "UClass.ClassCastFlags"); }
	int& ClassUniqueField() { return *GetNativePointerField<int*>(this, "UClass.ClassUnique"); }
	bool& bIsGameClassField() { return *GetNativePointerField<bool*>(this, "UClass.bIsGameClass"); }
	FName& ClassConfigNameField() { return *GetNativePointerField<FName*>(this, "UClass.ClassConfigName"); }
	TArray<FRepRecord>& ClassRepsField() { return *GetNativePointerField<TArray<FRepRecord>*>(this, "UClass.ClassReps"); }
	bool& bCookedField() { return *GetNativePointerField<bool*>(this, "UClass.bCooked"); }
	TArray<FImplementedInterface>& InterfacesField() { return *GetNativePointerField<TArray<FImplementedInterface>*>(this, "UClass.Interfaces"); }
	FGCReferenceTokenStream& ReferenceTokenStreamField() { return *GetNativePointerField<FGCReferenceTokenStream*>(this, "UClass.ReferenceTokenStream"); }
	TArray<FNativeFunctionLookup>& NativeFunctionLookupTableField() { return *GetNativePointerField<TArray<FNativeFunctionLookup>*>(this, "UClass.NativeFunctionLookupTable"); }

	// Functions

	void AddFunctionToFunctionMap(UFunction * NewFunction) { NativeCall<void, UFunction *>(this, "UClass.AddFunctionToFunctionMap", NewFunction); }
	void AddNativeFunction(const char * InName, void (__fastcall *)(UObject *this, FFrame *, void *const) void) { NativeCall<void, const char *, void (__fastcall *)(UObject *this, FFrame *, void *const)>(this, "UClass.AddNativeFunction", InName, void); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UClass.AddReferencedObjects", InThis, Collector); }
	void AssembleReferenceTokenStream() { NativeCall<void>(this, "UClass.AssembleReferenceTokenStream"); }
	void Bind() { NativeCall<void>(this, "UClass.Bind"); }
	void DeferredRegister(UClass * UClassStaticClass, const wchar_t * PackageName, const wchar_t * Name) { NativeCall<void, UClass *, const wchar_t *, const wchar_t *>(this, "UClass.DeferredRegister", UClassStaticClass, PackageName, Name); }
	void EmitObjectReference(int Offset, const FName * DebugName, EGCReferenceType Kind) { NativeCall<void, int, const FName *, EGCReferenceType>(this, "UClass.EmitObjectReference", Offset, DebugName, Kind); }
	unsigned int EmitStructArrayBegin(int Offset, const FName * DebugName, int Stride) { return NativeCall<unsigned int, int, const FName *, int>(this, "UClass.EmitStructArrayBegin", Offset, DebugName, Stride); }
	void EmitStructArrayEnd(unsigned int SkipIndexIndex) { NativeCall<void, unsigned int>(this, "UClass.EmitStructArrayEnd", SkipIndexIndex); }
	UFunction * FindFunctionByName(FName InName, EIncludeSuperFlag::Type IncludeSuper) { return NativeCall<UFunction *, FName, EIncludeSuperFlag::Type>(this, "UClass.FindFunctionByName", InName, IncludeSuper); }
	void FinishDestroy() { NativeCall<void>(this, "UClass.FinishDestroy"); }
	const FString * GetConfigName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UClass.GetConfigName", result); }
	FName * GetDefaultObjectName(FName * result) { return NativeCall<FName *, FName *>(this, "UClass.GetDefaultObjectName", result); }
	void GetDefaultObjectSubobjects(TArray<UObject *> * OutDefaultSubobjects) { NativeCall<void, TArray<UObject *> *>(this, "UClass.GetDefaultObjectSubobjects", OutDefaultSubobjects); }
	FString * GetDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UClass.GetDescription", result); }
	const wchar_t * GetPrefixCPP() { return NativeCall<const wchar_t *>(this, "UClass.GetPrefixCPP"); }
	bool HasProperty(UProperty * InProperty) { return NativeCall<bool, UProperty *>(this, "UClass.HasProperty", InProperty); }
	bool ImplementsInterface(const UClass * SomeInterface) { return NativeCall<bool, const UClass *>(this, "UClass.ImplementsInterface", SomeInterface); }
	void Link(FArchive * Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive *, bool>(this, "UClass.Link", Ar, bRelinkExistingProperties); }
	void PostInitProperties() { NativeCall<void>(this, "UClass.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UClass.PostLoad"); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>(this, "UClass.PurgeClass", bRecompilingOnLoad); }
	bool Rename(const wchar_t * InName, UObject * NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>(this, "UClass.Rename", InName, NewOuter, Flags); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UClass.Serialize", Ar); }
	void SerializeDefaultObject(UObject * Object, FArchive * Ar) { NativeCall<void, UObject *, FArchive *>(this, "UClass.SerializeDefaultObject", Object, Ar); }
	void SetSuperStruct(UStruct * NewSuperStruct) { NativeCall<void, UStruct *>(this, "UClass.SetSuperStruct", NewSuperStruct); }
	void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UClass.TagSubobjects", NewFlags); }
};

