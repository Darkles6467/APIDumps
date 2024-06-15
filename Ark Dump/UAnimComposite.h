#pragma once

#include "BaseDeclarations.h"
#include "UAnimCompositeBase.h"
#include "UAnimSequenceBase.h"
#include "UAnimationAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimComposite : UAnimCompositeBase
{
	char __padding[0x10L];
	FAnimTrack& AnimationTrackField() { return *GetNativePointerField<FAnimTrack*>(this, "UAnimComposite.AnimationTrack"); }

	// Functions

};

