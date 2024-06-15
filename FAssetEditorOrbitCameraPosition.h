#pragma once

#include "BaseDeclarations.h"
struct FAssetEditorOrbitCameraPosition
{
	char __padding[0x28L];
	bool& bIsSetField() { return *GetNativePointerField<bool*>(this, "FAssetEditorOrbitCameraPosition.bIsSet"); }
	FVector& CamOrbitPointField() { return *GetNativePointerField<FVector*>(this, "FAssetEditorOrbitCameraPosition.CamOrbitPoint"); }
	FVector& CamOrbitZoomField() { return *GetNativePointerField<FVector*>(this, "FAssetEditorOrbitCameraPosition.CamOrbitZoom"); }
	FRotator& CamOrbitRotationField() { return *GetNativePointerField<FRotator*>(this, "FAssetEditorOrbitCameraPosition.CamOrbitRotation"); }

	// Functions

};

