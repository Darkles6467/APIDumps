#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPOverrideAllowStructureAccess_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructure_eventBPOverrideAllowStructureAccess_Parms.ForPC"); }
	bool& bIsAccessAllowedField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPOverrideAllowStructureAccess_Parms.bIsAccessAllowed"); }
	bool& bForInventoryOnlyField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPOverrideAllowStructureAccess_Parms.bForInventoryOnly"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPOverrideAllowStructureAccess_Parms.ReturnValue"); }

	// Functions

};

