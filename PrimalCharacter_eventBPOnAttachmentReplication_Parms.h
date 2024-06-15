#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOnAttachmentReplication_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOnAttachmentReplication_Parms.ReturnValue"); }
};

