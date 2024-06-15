#pragma once

#include "BaseDeclarations.h"
struct FOnlineStatUpdate
{
	enum EOnlineStatModificationType
	{
		Unknown = 0x0,
		Sum = 0x1,
		Set = 0x2,
		Largest = 0x3,
		Smallest = 0x4,
	};

	char __padding[0x20L];
	FVariantData& NewValueField() { return *GetNativePointerField<FVariantData*>(this, "FOnlineStatUpdate.NewValue"); }
	FieldArray<_BYTE, 1> ModificationTypeField() { return {this, "FOnlineStatUpdate.ModificationType"}; }
};

