#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDataTable : UObject
{
	char __padding[0x68L];
	FString& ImportPathField() { return *GetNativePointerField<FString*>(this, "UDataTable.ImportPath"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UDataTable.AddReferencedObjects", InThis, Collector); }
	void EmptyTable() { NativeCall<void>(this, "UDataTable.EmptyTable"); }
	void * FindRowUnchecked(FName RowName, bool MustExist) { return NativeCall<void *, FName, bool>(this, "UDataTable.FindRowUnchecked", RowName, MustExist); }
	void FinishDestroy() { NativeCall<void>(this, "UDataTable.FinishDestroy"); }
	void LoadStructData(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UDataTable.LoadStructData", Ar); }
	void SaveStructData(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UDataTable.SaveStructData", Ar); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UDataTable.Serialize", Ar); }
};

