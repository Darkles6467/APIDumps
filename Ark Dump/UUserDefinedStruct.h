#pragma once

#include "BaseDeclarations.h"
#include "UStruct.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScriptStruct : UStruct
{
	char __padding[0x18L];
	EStructFlags& StructFlagsField() { return *GetNativePointerField<EStructFlags*>(this, "UScriptStruct.StructFlags"); }
	bool& bCppStructOpsFromBaseClassField() { return *GetNativePointerField<bool*>(this, "UScriptStruct.bCppStructOpsFromBaseClass"); }
	bool& bPrepareCppStructOpsCompletedField() { return *GetNativePointerField<bool*>(this, "UScriptStruct.bPrepareCppStructOpsCompleted"); }

	// Functions

	void ICppStructOps(int InSize, int InAlignment) { NativeCall<void, int, int>(this, "UScriptStruct.ICppStructOps", InSize, InAlignment); }
	void ICppStructOps() { NativeCall<void>(this, "UScriptStruct.ICppStructOps"); }
	static void * operator new(const unsigned __int64 InSize, UObject * InOuter, FName InName, EObjectFlags InSetFlags) { return NativeCall<void *, const unsigned __int64, UObject *, FName, EObjectFlags>(nullptr, "UScriptStruct.operator new", InSize, InOuter, InName, InSetFlags); }
	void ClearScriptStruct(void * Dest, int ArrayDim) { NativeCall<void, void *, int>(this, "UScriptStruct.ClearScriptStruct", Dest, ArrayDim); }
	bool CompareScriptStruct(const void * A, const void * B, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, unsigned int>(this, "UScriptStruct.CompareScriptStruct", A, B, PortFlags); }
	void CopyScriptStruct(void * InDest, const void * InSrc, int ArrayDim) { NativeCall<void, void *, const void *, int>(this, "UScriptStruct.CopyScriptStruct", InDest, InSrc, ArrayDim); }
	static void DeferCppStructOps(FName Target, UScriptStruct::ICppStructOps * InCppStructOps) { NativeCall<void, FName, UScriptStruct::ICppStructOps *>(nullptr, "UScriptStruct.DeferCppStructOps", Target, InCppStructOps); }
	void DestroyScriptStruct(void * Dest, int ArrayDim) { NativeCall<void, void *, int>(this, "UScriptStruct.DestroyScriptStruct", Dest, ArrayDim); }
	void InitializeScriptStruct(void * InDest, int ArrayDim) { NativeCall<void, void *, int>(this, "UScriptStruct.InitializeScriptStruct", InDest, ArrayDim); }
	void Link(FArchive * Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive *, bool>(this, "UScriptStruct.Link", Ar, bRelinkExistingProperties); }
	void PostLoad() { NativeCall<void>(this, "UScriptStruct.PostLoad"); }
	void PrepareCppStructOps() { NativeCall<void>(this, "UScriptStruct.PrepareCppStructOps"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UScriptStruct.Serialize", Ar); }
};

struct UUserDefinedStruct : UScriptStruct
{

	// Functions

	void RecursivelyPreload() { NativeCall<void>(this, "UUserDefinedStruct.RecursivelyPreload"); }
	void SerializeTaggedProperties(FArchive * Ar, char * Data, UStruct * DefaultsStruct, char * Defaults, UObject * BreakRecursionIfFullyLoad) { NativeCall<void, FArchive *, char *, UStruct *, char *, UObject *>(this, "UUserDefinedStruct.SerializeTaggedProperties", Ar, Data, DefaultsStruct, Defaults, BreakRecursionIfFullyLoad); }
};

