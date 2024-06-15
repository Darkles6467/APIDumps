#pragma once

#include "BaseDeclarations.h"
struct FXMPHelper
{
	char __padding[0x8L];
	int& CinematicAudioCountField() { return *GetNativePointerField<int*>(this, "FXMPHelper.CinematicAudioCount"); }
	bool& MoviePlayingField() { return *GetNativePointerField<bool*>(this, "FXMPHelper.MoviePlaying"); }
	bool& XMPEnabledField() { return *GetNativePointerField<bool*>(this, "FXMPHelper.XMPEnabled"); }
	bool& XMPBlockedField() { return *GetNativePointerField<bool*>(this, "FXMPHelper.XMPBlocked"); }
};

