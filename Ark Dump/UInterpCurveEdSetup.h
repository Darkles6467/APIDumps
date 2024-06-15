#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpCurveEdSetup : UObject
{
	char __padding[0x18L];
	TArray<FCurveEdTab>& TabsField() { return *GetNativePointerField<TArray<FCurveEdTab>*>(this, "UInterpCurveEdSetup.Tabs"); }
	int& ActiveTabField() { return *GetNativePointerField<int*>(this, "UInterpCurveEdSetup.ActiveTab"); }

	// Functions

	static FCurveEdInterface * GetCurveEdInterfacePointer(const FCurveEdEntry * Entry) { return NativeCall<FCurveEdInterface *, const FCurveEdEntry *>(nullptr, "UInterpCurveEdSetup.GetCurveEdInterfacePointer", Entry); }
	void PostLoad() { NativeCall<void>(this, "UInterpCurveEdSetup.PostLoad"); }
	void ResetTabs() { NativeCall<void>(this, "UInterpCurveEdSetup.ResetTabs"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UInterpCurveEdSetup.Serialize", Ar); }
};

