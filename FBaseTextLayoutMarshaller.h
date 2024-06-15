#pragma once

#include "BaseDeclarations.h"
#include "ITextLayoutMarshaller.h"

struct FBaseTextLayoutMarshaller : ITextLayoutMarshaller
{
	char __padding[0x8L];
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "FBaseTextLayoutMarshaller.bIsDirty"); }

	// Functions

	void MakeDirty() { NativeCall<void>(this, "FBaseTextLayoutMarshaller.MakeDirty"); }
	bool IsDirty() { return NativeCall<bool>(this, "FBaseTextLayoutMarshaller.IsDirty"); }
};

