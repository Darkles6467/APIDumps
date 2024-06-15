#pragma once

#include "BaseDeclarations.h"
struct FRepParentCmd
{
	char __padding[0x20L];
	int& ArrayIndexField() { return *GetNativePointerField<int*>(this, "FRepParentCmd.ArrayIndex"); }
	unsigned __int16& CmdStartField() { return *GetNativePointerField<unsigned __int16*>(this, "FRepParentCmd.CmdStart"); }
	unsigned __int16& CmdEndField() { return *GetNativePointerField<unsigned __int16*>(this, "FRepParentCmd.CmdEnd"); }
	int& RoleSwapIndexField() { return *GetNativePointerField<int*>(this, "FRepParentCmd.RoleSwapIndex"); }
	ELifetimeCondition& ConditionField() { return *GetNativePointerField<ELifetimeCondition*>(this, "FRepParentCmd.Condition"); }
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "FRepParentCmd.Flags"); }
};

