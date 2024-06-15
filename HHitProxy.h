#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct HHitProxy : FRefCountedObject
{
	char __padding[0x10L];
	const EHitProxyPriority& PriorityField() { return *GetNativePointerField<const EHitProxyPriority*>(this, "HHitProxy.Priority"); }
	const EHitProxyPriority& OrthoPriorityField() { return *GetNativePointerField<const EHitProxyPriority*>(this, "HHitProxy.OrthoPriority"); }
	FHitProxyId& IdField() { return *GetNativePointerField<FHitProxyId*>(this, "HHitProxy.Id"); }

	// Functions

};

