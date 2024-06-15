#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ALevelBounds : AActor
{
	char __padding[0x8L];
	bool& bAutoUpdateBoundsField() { return *GetNativePointerField<bool*>(this, "ALevelBounds.bAutoUpdateBounds"); }

	// Functions

	FBox * GetComponentsBoundingBox(FBox * result, bool bNonColliding) { return NativeCall<FBox *, FBox *, bool>(this, "ALevelBounds.GetComponentsBoundingBox", result, bNonColliding); }
	void PostLoad() { NativeCall<void>(this, "ALevelBounds.PostLoad"); }
};

