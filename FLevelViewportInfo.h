#pragma once

#include "BaseDeclarations.h"
struct FLevelViewportInfo
{
	char __padding[0x20L];
	FVector& CamPositionField() { return *GetNativePointerField<FVector*>(this, "FLevelViewportInfo.CamPosition"); }
	FRotator& CamRotationField() { return *GetNativePointerField<FRotator*>(this, "FLevelViewportInfo.CamRotation"); }
	float& CamOrthoZoomField() { return *GetNativePointerField<float*>(this, "FLevelViewportInfo.CamOrthoZoom"); }
	bool& CamUpdatedField() { return *GetNativePointerField<bool*>(this, "FLevelViewportInfo.CamUpdated"); }
};

