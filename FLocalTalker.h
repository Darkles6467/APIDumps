#pragma once

#include "BaseDeclarations.h"
struct FLocalTalker
{
	char __padding[0xcL];
	bool& bIsRegisteredField() { return *GetNativePointerField<bool*>(this, "FLocalTalker.bIsRegistered"); }
	bool& bHasNetworkedVoiceField() { return *GetNativePointerField<bool*>(this, "FLocalTalker.bHasNetworkedVoice"); }
	float& LastNotificationTimeField() { return *GetNativePointerField<float*>(this, "FLocalTalker.LastNotificationTime"); }
	bool& bWasTalkingField() { return *GetNativePointerField<bool*>(this, "FLocalTalker.bWasTalking"); }
	bool& bIsTalkingField() { return *GetNativePointerField<bool*>(this, "FLocalTalker.bIsTalking"); }
	bool& bUseSuperRangeField() { return *GetNativePointerField<bool*>(this, "FLocalTalker.bUseSuperRange"); }
};

