#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCurveTable : UObject
{
	char __padding[0x60L];
	FString& ImportPathField() { return *GetNativePointerField<FString*>(this, "UCurveTable.ImportPath"); }

	// Functions

	void EmptyTable() { NativeCall<void>(this, "UCurveTable.EmptyTable"); }
	FRichCurve * FindCurve(FName RowName, const FString * ContextString, bool WarnIfNotFound) { return NativeCall<FRichCurve *, FName, const FString *, bool>(this, "UCurveTable.FindCurve", RowName, ContextString, WarnIfNotFound); }
	void FinishDestroy() { NativeCall<void>(this, "UCurveTable.FinishDestroy"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UCurveTable.Serialize", Ar); }
};

