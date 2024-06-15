#pragma once

#include "BaseDeclarations.h"
struct FLandscapeSplineSegmentConnection
{
	char __padding[0x18L];
	ULandscapeSplineControlPoint * ControlPointField() { return GetNativePointerField<ULandscapeSplineControlPoint *>(this, "FLandscapeSplineSegmentConnection.ControlPoint"); }
	float& TangentLenField() { return *GetNativePointerField<float*>(this, "FLandscapeSplineSegmentConnection.TangentLen"); }
	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "FLandscapeSplineSegmentConnection.SocketName"); }

	// Functions

};

