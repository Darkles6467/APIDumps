#pragma once

#include "BaseDeclarations.h"
struct FClearValueBinding
{
	char __padding[0x14L];
	EClearBinding& ColorBindingField() { return *GetNativePointerField<EClearBinding*>(this, "FClearValueBinding.ColorBinding"); }
	FClearValueBinding::ClearValueType& ValueField() { return *GetNativePointerField<FClearValueBinding::ClearValueType*>(this, "FClearValueBinding.Value"); }

	// Functions

	bool operator==(const FClearValueBinding * Other) { return NativeCall<bool, const FClearValueBinding *>(this, "FClearValueBinding.operator==", Other); }
};

