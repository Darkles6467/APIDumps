#pragma once

#include "BaseDeclarations.h"
struct FWindowActivateEvent
{
	enum EActivationType
	{
		EA_Activate = 0x0,
		EA_ActivateByMouse = 0x1,
		EA_Deactivate = 0x2,
	};

	char __padding[0x18L];
	FWindowActivateEvent::EActivationType& ActivationTypeField() { return *GetNativePointerField<FWindowActivateEvent::EActivationType*>(this, "FWindowActivateEvent.ActivationType"); }
	TSharedRef<SWindow,0>& AffectedWindowField() { return *GetNativePointerField<TSharedRef<SWindow,0>*>(this, "FWindowActivateEvent.AffectedWindow"); }
};

