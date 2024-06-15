#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstEvent : UInterpTrackInst
{
	char __padding[0x8L];
	float& LastUpdatePositionField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstEvent.LastUpdatePosition"); }

	// Functions

};

