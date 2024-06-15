#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPAllowSnapRotationForStructure_Parms
{
	char __padding[0x28L];
	int& ThisSnapPointIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPAllowSnapRotationForStructure_Parms.ThisSnapPointIndex"); }
	FName& ThisSnapPointNameField() { return *GetNativePointerField<FName*>(this, "PrimalStructure_eventBPAllowSnapRotationForStructure_Parms.ThisSnapPointName"); }
	int& OtherStructureSnapPointIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPAllowSnapRotationForStructure_Parms.OtherStructureSnapPointIndex"); }
	FName& OtherStructureSnapPointNameField() { return *GetNativePointerField<FName*>(this, "PrimalStructure_eventBPAllowSnapRotationForStructure_Parms.OtherStructureSnapPointName"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPAllowSnapRotationForStructure_Parms.ReturnValue"); }

	// Functions

};

