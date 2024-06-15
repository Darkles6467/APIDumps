#pragma once

#include "BaseDeclarations.h"
struct ISlateMetaData
{
	char __padding[0x8L];

	// Functions

};

struct FTagMetaData : ISlateMetaData
{
	char __padding[0x8L];
	FName& TagField() { return *GetNativePointerField<FName*>(this, "FTagMetaData.Tag"); }

	// Functions

	bool IsOfTypeImpl(const FName * Type) { return NativeCall<bool, const FName *>(this, "FTagMetaData.IsOfTypeImpl", Type); }
};

