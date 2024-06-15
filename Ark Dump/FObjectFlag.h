#pragma once

#include "BaseDeclarations.h"
struct FObjectFlag
{
	char __padding[0x10L];
	EObjectFlags& ObjectFlagField() { return *GetNativePointerField<EObjectFlags*>(this, "FObjectFlag.ObjectFlag"); }
	const wchar_t * FlagNameField() { return GetNativePointerField<const wchar_t *>(this, "FObjectFlag.FlagName"); }
};

