#pragma once

#include "BaseDeclarations.h"
struct FTimer
{
	char __padding[0xcL];
	float& CurrentDeltaTimeField() { return *GetNativePointerField<float*>(this, "FTimer.CurrentDeltaTime"); }
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "FTimer.CurrentTime"); }
	bool& bGamePausedField() { return *GetNativePointerField<bool*>(this, "FTimer.bGamePaused"); }
};

