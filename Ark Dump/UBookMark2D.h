#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBookMark2D : UObject
{
	char __padding[0x10L];
	float& Zoom2DField() { return *GetNativePointerField<float*>(this, "UBookMark2D.Zoom2D"); }
	FIntPoint& LocationField() { return *GetNativePointerField<FIntPoint*>(this, "UBookMark2D.Location"); }

	// Functions

};

