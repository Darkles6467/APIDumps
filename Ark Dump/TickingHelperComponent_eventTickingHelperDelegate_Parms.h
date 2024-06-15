#pragma once

#include "BaseDeclarations.h"
struct TickingHelperComponent_eventTickingHelperDelegate_Parms
{
	char __padding[0x10L];
	UTickingHelperComponent * TickingComponentField() { return GetNativePointerField<UTickingHelperComponent *>(this, "TickingHelperComponent_eventTickingHelperDelegate_Parms.TickingComponent"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "TickingHelperComponent_eventTickingHelperDelegate_Parms.DeltaTime"); }
};

