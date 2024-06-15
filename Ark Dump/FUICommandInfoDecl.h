#pragma once

#include "BaseDeclarations.h"
struct FUICommandInfoDecl
{
	char __padding[0x18L];
	TSharedPtr<FUICommandInfo,0>& InfoField() { return *GetNativePointerField<TSharedPtr<FUICommandInfo,0>*>(this, "FUICommandInfoDecl.Info"); }
};

