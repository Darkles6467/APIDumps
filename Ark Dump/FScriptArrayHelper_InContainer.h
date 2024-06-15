#pragma once

#include "BaseDeclarations.h"
struct FScriptArrayHelper
{
	char __padding[0x18L];
	int& ElementSizeField() { return *GetNativePointerField<int*>(this, "FScriptArrayHelper.ElementSize"); }

	// Functions

	void ConstructItems(int Index, int Count) { NativeCall<void, int, int>(this, "FScriptArrayHelper.ConstructItems", Index, Count); }
	void DestructItems(int Index, int Count) { NativeCall<void, int, int>(this, "FScriptArrayHelper.DestructItems", Index, Count); }
	void InsertValues(int Index, int Count) { NativeCall<void, int, int>(this, "FScriptArrayHelper.InsertValues", Index, Count); }
	void RemoveValues(int Index, int Count) { NativeCall<void, int, int>(this, "FScriptArrayHelper.RemoveValues", Index, Count); }
	void Resize(int Count) { NativeCall<void, int>(this, "FScriptArrayHelper.Resize", Count); }
	void EmptyAndAddValues(int Count) { NativeCall<void, int>(this, "FScriptArrayHelper.EmptyAndAddValues", Count); }
};

struct FScriptArrayHelper_InContainer : FScriptArrayHelper
{
};

