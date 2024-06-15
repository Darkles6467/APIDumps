#pragma once

#include "BaseDeclarations.h"
struct NavigationPath_eventOnNavigationPathUpdated_Parms
{
	char __padding[0x10L];
	UNavigationPath * AffectedPathField() { return GetNativePointerField<UNavigationPath *>(this, "NavigationPath_eventOnNavigationPathUpdated_Parms.AffectedPath"); }
	TEnumAsByte<enum ENavPathEvent::Type>& PathEventField() { return *GetNativePointerField<TEnumAsByte<enum ENavPathEvent::Type>*>(this, "NavigationPath_eventOnNavigationPathUpdated_Parms.PathEvent"); }
};

