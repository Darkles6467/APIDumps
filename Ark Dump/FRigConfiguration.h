#pragma once

#include "BaseDeclarations.h"
struct FRigConfiguration
{
	char __padding[0x18L];
	URig * RigField() { return GetNativePointerField<URig *>(this, "FRigConfiguration.Rig"); }
	TArray<FNameMapping>& BoneMappingTableField() { return *GetNativePointerField<TArray<FNameMapping>*>(this, "FRigConfiguration.BoneMappingTable"); }

	// Functions

};

