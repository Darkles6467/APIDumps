#pragma once

#include "BaseDeclarations.h"
#include "UField.h"

struct UStruct : UField
{
	char __padding[0x60L];
	int& PropertiesSizeField() { return *GetNativePointerField<int*>(this, "UStruct.PropertiesSize"); }
	TArray<unsigned char>& ScriptField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UStruct.Script"); }
	int& MinAlignmentField() { return *GetNativePointerField<int*>(this, "UStruct.MinAlignment"); }

	// Functions

	bool IsChildOf(const UStruct * SomeBase) { return NativeCall<bool, const UStruct *>(this, "UStruct.IsChildOf", SomeBase); }
	void LinkChild(UField * Child) { NativeCall<void, UField *>(this, "UStruct.LinkChild", Child); }
	void FinishDestroy() { NativeCall<void>(this, "UStruct.FinishDestroy"); }
	const wchar_t * GetPrefixCPP() { return NativeCall<const wchar_t *>(this, "UStruct.GetPrefixCPP"); }
	void InstanceSubobjectTemplates(void * Data, const void * DefaultData, UStruct * DefaultStruct, UObject * Owner, FObjectInstancingGraph * InstanceGraph) { NativeCall<void, void *, const void *, UStruct *, UObject *, FObjectInstancingGraph *>(this, "UStruct.InstanceSubobjectTemplates", Data, DefaultData, DefaultStruct, Owner, InstanceGraph); }
	void Link(FArchive * Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive *, bool>(this, "UStruct.Link", Ar, bRelinkExistingProperties); }
	void RegisterDependencies() { NativeCall<void>(this, "UStruct.RegisterDependencies"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UStruct.Serialize", Ar); }
	void SerializeBin(FArchive * Ar, void * Data, int MaxReadBytes) { NativeCall<void, FArchive *, void *, int>(this, "UStruct.SerializeBin", Ar, Data, MaxReadBytes); }
	void SerializeBinEx(FArchive * Ar, void * Data, const void * DefaultData, UStruct * DefaultStruct) { NativeCall<void, FArchive *, void *, const void *, UStruct *>(this, "UStruct.SerializeBinEx", Ar, Data, DefaultData, DefaultStruct); }
	EExprToken SerializeExpr(int * iCode, FArchive * Ar) { return NativeCall<EExprToken, int *, FArchive *>(this, "UStruct.SerializeExpr", iCode, Ar); }
	void SerializeTaggedProperties(FArchive * Ar, char * Data, UStruct * DefaultsStruct, char * Defaults, UObject * BreakRecursionIfFullyLoad) { NativeCall<void, FArchive *, char *, UStruct *, char *, UObject *>(this, "UStruct.SerializeTaggedProperties", Ar, Data, DefaultsStruct, Defaults, BreakRecursionIfFullyLoad); }
	void SetSuperStruct(UStruct * NewSuperStruct) { NativeCall<void, UStruct *>(this, "UStruct.SetSuperStruct", NewSuperStruct); }
	void StaticLink(bool bRelinkExistingProperties) { NativeCall<void, bool>(this, "UStruct.StaticLink", bRelinkExistingProperties); }
	void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UStruct.TagSubobjects", NewFlags); }
};

