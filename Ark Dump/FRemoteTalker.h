#pragma once

#include "BaseDeclarations.h"
struct FRemoteTalker
{
	char __padding[0x18L];
	float& LastNotificationTimeField() { return *GetNativePointerField<float*>(this, "FRemoteTalker.LastNotificationTime"); }
	bool& bWasTalkingField() { return *GetNativePointerField<bool*>(this, "FRemoteTalker.bWasTalking"); }
	bool& bIsTalkingField() { return *GetNativePointerField<bool*>(this, "FRemoteTalker.bIsTalking"); }
	bool& bUseSuperRangeField() { return *GetNativePointerField<bool*>(this, "FRemoteTalker.bUseSuperRange"); }
};

