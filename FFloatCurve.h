#pragma once

#include "BaseDeclarations.h"
struct FAnimCurveBase
{
	char __padding[0x18L];
	FName& LastObservedNameField() { return *GetNativePointerField<FName*>(this, "FAnimCurveBase.LastObservedName"); }
	unsigned __int16& CurveUidField() { return *GetNativePointerField<unsigned __int16*>(this, "FAnimCurveBase.CurveUid"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FAnimCurveBase.Serialize", Ar); }
};

struct FFloatCurve : FAnimCurveBase
{
	char __padding[0x70L];
	FRichCurve& FloatCurveField() { return *GetNativePointerField<FRichCurve*>(this, "FFloatCurve.FloatCurve"); }
	int& CurveTypeFlagsField() { return *GetNativePointerField<int*>(this, "FFloatCurve.CurveTypeFlags"); }

	// Functions

};

