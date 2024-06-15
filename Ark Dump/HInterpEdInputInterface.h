#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HInterpEdInputInterface : HHitProxy
{
	char __padding[0x30L];
	FInterpEdInputInterface * ClickedObjectField() { return GetNativePointerField<FInterpEdInputInterface *>(this, "HInterpEdInputInterface.ClickedObject"); }
	FInterpEdInputData& InputDataField() { return *GetNativePointerField<FInterpEdInputData*>(this, "HInterpEdInputInterface.InputData"); }
};

