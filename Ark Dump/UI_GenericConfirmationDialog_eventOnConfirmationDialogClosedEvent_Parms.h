#pragma once

#include "BaseDeclarations.h"
struct UI_GenericConfirmationDialog_eventOnConfirmationDialogClosedEvent_Parms
{
	char __padding[0x1L];
	bool& bAcceptField() { return *GetNativePointerField<bool*>(this, "UI_GenericConfirmationDialog_eventOnConfirmationDialogClosedEvent_Parms.bAccept"); }
};

