#pragma once

#include "BaseDeclarations.h"
#include "FExec.h"

struct FColorList : FExec
{
	char __padding[0x60L];
	TArray<FColor const *>& ColorsLookupField() { return *GetNativePointerField<TArray<FColor const *>*>(this, "FColorList.ColorsLookup"); }

	// Functions

	void CreateColorMap() { NativeCall<void>(this, "FColorList.CreateColorMap"); }
	const FString * GetColorNameByIndex(int ColorIndex) { return NativeCall<const FString *, int>(this, "FColorList.GetColorNameByIndex", ColorIndex); }
	const FColor * GetFColorByIndex(int ColorIndex) { return NativeCall<const FColor *, int>(this, "FColorList.GetFColorByIndex", ColorIndex); }
	void InitializeColor(const wchar_t * ColorName, const FColor * ColorPtr, int * CurrentIndex) { NativeCall<void, const wchar_t *, const FColor *, int *>(this, "FColorList.InitializeColor", ColorName, ColorPtr, CurrentIndex); }
};

