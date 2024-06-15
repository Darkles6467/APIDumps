#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstVisibility : UInterpTrackInst
{
	char __padding[0x8L];
	TEnumAsByte<enum EVisibilityTrackAction>& ActionField() { return *GetNativePointerField<TEnumAsByte<enum EVisibilityTrackAction>*>(this, "UInterpTrackInstVisibility.Action"); }
	float& LastUpdatePositionField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstVisibility.LastUpdatePosition"); }

	// Functions

};

