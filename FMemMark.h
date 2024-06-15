#pragma once

#include "BaseDeclarations.h"
struct FMemMark
{
	char __padding[0x40L];
	char * TopField() { return GetNativePointerField<char *>(this, "FMemMark.Top"); }
	bool& bPoppedField() { return *GetNativePointerField<bool*>(this, "FMemMark.bPopped"); }
	FMemMark * NextTopmostMarkField() { return GetNativePointerField<FMemMark *>(this, "FMemMark.NextTopmostMark"); }
	int& MarkIDField() { return *GetNativePointerField<int*>(this, "FMemMark.MarkID"); }
	TArray<FMemMark *>& ChildMarksField() { return *GetNativePointerField<TArray<FMemMark *>*>(this, "FMemMark.ChildMarks"); }

	// Functions

	void Pop() { NativeCall<void>(this, "FMemMark.Pop"); }
	void PushChildMark(FMemMark * ChildMark) { NativeCall<void, FMemMark *>(this, "FMemMark.PushChildMark", ChildMark); }
};

