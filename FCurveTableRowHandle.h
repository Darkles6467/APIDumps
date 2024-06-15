#pragma once

#include "BaseDeclarations.h"
struct FCurveTableRowHandle
{
	char __padding[0x10L];
	const UCurveTable * CurveTableField() { return GetNativePointerField<const UCurveTable *>(this, "FCurveTableRowHandle.CurveTable"); }
	FName& RowNameField() { return *GetNativePointerField<FName*>(this, "FCurveTableRowHandle.RowName"); }

	// Functions

	bool Eval(float XValue, float * YValue) { return NativeCall<bool, float, float *>(this, "FCurveTableRowHandle.Eval", XValue, YValue); }
};

