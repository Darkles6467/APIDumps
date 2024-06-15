#pragma once

#include "BaseDeclarations.h"
struct FScopedNetConnectionSettings
{
	char __padding[0x10L];
	FNetConnectionSettings& OldSettingsField() { return *GetNativePointerField<FNetConnectionSettings*>(this, "FScopedNetConnectionSettings.OldSettings"); }
	bool& ShouldApplyField() { return *GetNativePointerField<bool*>(this, "FScopedNetConnectionSettings.ShouldApply"); }
};

