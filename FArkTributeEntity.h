#pragma once

#include "BaseDeclarations.h"
struct FArkTributeEntity
{
	char __padding[0x4L];
	int& UploadTimeField() { return *GetNativePointerField<int*>(this, "FArkTributeEntity.UploadTime"); }

	// Functions

};

