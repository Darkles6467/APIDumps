#pragma once

#include "BaseDeclarations.h"
struct FAIRequestID
{
	char __padding[0x4L];
	unsigned int& RequestIDField() { return *GetNativePointerField<unsigned int*>(this, "FAIRequestID.RequestID"); }

	// Functions

};

