#pragma once

#include "BaseDeclarations.h"
struct FSerializationHistoryTraversalState
{
	char __padding[0x10L];
	const FSerializationHistory * HistoryField() { return GetNativePointerField<const FSerializationHistory *>(this, "FSerializationHistoryTraversalState.History"); }
	int& NextTokenIndexField() { return *GetNativePointerField<int*>(this, "FSerializationHistoryTraversalState.NextTokenIndex"); }
	int& NextFullLengthIndexField() { return *GetNativePointerField<int*>(this, "FSerializationHistoryTraversalState.NextFullLengthIndex"); }

	// Functions

	unsigned int GetValue(int Offset) { return NativeCall<unsigned int, int>(this, "FSerializationHistoryTraversalState.GetValue", Offset); }
};

