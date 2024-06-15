#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventBPNotifyRemoteViewerChange_Parms
{
	char __padding[0x1L];
	bool& bOpenedField() { return *GetNativePointerField<bool*>(this, "PrimalStructureItemContainer_eventBPNotifyRemoteViewerChange_Parms.bOpened"); }
};

