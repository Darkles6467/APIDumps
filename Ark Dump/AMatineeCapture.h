#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AMatineeCapture : AActor
{
	char __padding[0x30L];
	float& CaptureFPSField() { return *GetNativePointerField<float*>(this, "AMatineeCapture.CaptureFPS"); }
	int& ResXField() { return *GetNativePointerField<int*>(this, "AMatineeCapture.ResX"); }
	int& ResYField() { return *GetNativePointerField<int*>(this, "AMatineeCapture.ResY"); }
	float& PreviewMatineeTimeField() { return *GetNativePointerField<float*>(this, "AMatineeCapture.PreviewMatineeTime"); }
	bool& bBeginCaptureField() { return *GetNativePointerField<bool*>(this, "AMatineeCapture.bBeginCapture"); }
	bool& bCancelCaptureField() { return *GetNativePointerField<bool*>(this, "AMatineeCapture.bCancelCapture"); }
	float& CaptureIntervalField() { return *GetNativePointerField<float*>(this, "AMatineeCapture.CaptureInterval"); }
	bool& bIsCapturingField() { return *GetNativePointerField<bool*>(this, "AMatineeCapture.bIsCapturing"); }
	int& CaptureIndexField() { return *GetNativePointerField<int*>(this, "AMatineeCapture.CaptureIndex"); }
	float& PreCaptureInterPositionField() { return *GetNativePointerField<float*>(this, "AMatineeCapture.PreCaptureInterPosition"); }
	int& TotalCapturesCountField() { return *GetNativePointerField<int*>(this, "AMatineeCapture.TotalCapturesCount"); }

	// Functions

};

