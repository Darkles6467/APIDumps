#pragma once

#include "BaseDeclarations.h"
struct FListPropsWildcardPiece
{
	char __padding[0x18L];
	FString& StrField() { return *GetNativePointerField<FString*>(this, "FListPropsWildcardPiece.Str"); }
	bool& bMultiCharField() { return *GetNativePointerField<bool*>(this, "FListPropsWildcardPiece.bMultiChar"); }
};

