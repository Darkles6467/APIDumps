#pragma once

#include "BaseDeclarations.h"
struct FClassNetCache
{
	char __padding[0x78L];
	int& FieldsBaseField() { return *GetNativePointerField<int*>(this, "FClassNetCache.FieldsBase"); }
	FClassNetCache * SuperField() { return GetNativePointerField<FClassNetCache *>(this, "FClassNetCache.Super"); }
	TArray<FFieldNetCache>& FieldsField() { return *GetNativePointerField<TArray<FFieldNetCache>*>(this, "FClassNetCache.Fields"); }

	// Functions

	FFieldNetCache * GetFromIndex(int Index) { return NativeCall<FFieldNetCache *, int>(this, "FClassNetCache.GetFromIndex", Index); }
	FFieldNetCache * GetFromField(UObject * Field) { return NativeCall<FFieldNetCache *, UObject *>(this, "FClassNetCache.GetFromField", Field); }
};

