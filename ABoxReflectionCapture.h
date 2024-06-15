#pragma once

#include "BaseDeclarations.h"
#include "AReflectionCapture.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ABoxReflectionCapture : AReflectionCapture
{

	// Functions

	UBoxReflectionCaptureComponent * GetBoxCaptureComponent() { return NativeCall<UBoxReflectionCaptureComponent *>(this, "ABoxReflectionCapture.GetBoxCaptureComponent"); }
};

