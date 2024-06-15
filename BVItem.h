#pragma once

#include "BaseDeclarations.h"
struct BVItem
{
	char __padding[0x10L];
	FieldArray<unsigned __int16, 3> bminField() { return {this, "BVItem.bmin"}; }
	FieldArray<unsigned __int16, 3> bmaxField() { return {this, "BVItem.bmax"}; }
	int& iField() { return *GetNativePointerField<int*>(this, "BVItem.i"); }
};

