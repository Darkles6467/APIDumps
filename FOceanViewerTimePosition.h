#pragma once

#include "BaseDeclarations.h"
struct FOceanViewerTimePosition
{
	char __padding[0x18L];
	long double& LastViewTimeStampField() { return *GetNativePointerField<long double*>(this, "FOceanViewerTimePosition.LastViewTimeStamp"); }
	FVector& LastViewPositionField() { return *GetNativePointerField<FVector*>(this, "FOceanViewerTimePosition.LastViewPosition"); }
};

