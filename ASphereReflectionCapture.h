#pragma once

#include "BaseDeclarations.h"
#include "AReflectionCapture.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASphereReflectionCapture : AReflectionCapture
{
	char __padding[0x8L];
	TSubobjectPtr<UDrawSphereComponent>& DrawCaptureRadiusField() { return *GetNativePointerField<TSubobjectPtr<UDrawSphereComponent>*>(this, "ASphereReflectionCapture.DrawCaptureRadius"); }

	// Functions

	USphereReflectionCaptureComponent * GetSphereCaptureComponent() { return NativeCall<USphereReflectionCaptureComponent *>(this, "ASphereReflectionCapture.GetSphereCaptureComponent"); }
};

