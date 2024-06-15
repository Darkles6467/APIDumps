#pragma once

#include "BaseDeclarations.h"
#include "IPlatformTextField.h"

struct FOnlineSubsystemHookVirtualKeyboard : IPlatformTextField
{
	char __padding[0x10L];
	TSharedPtr<IVirtualKeyboardEntry,0>& LastKeyboardEntryField() { return *GetNativePointerField<TSharedPtr<IVirtualKeyboardEntry,0>*>(this, "FOnlineSubsystemHookVirtualKeyboard.LastKeyboardEntry"); }
};

