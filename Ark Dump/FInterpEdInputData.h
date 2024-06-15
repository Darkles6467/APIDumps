#pragma once

#include "BaseDeclarations.h"
struct FInterpEdInputData
{
	char __padding[0x28L];
	int& InputTypeField() { return *GetNativePointerField<int*>(this, "FInterpEdInputData.InputType"); }
	int& InputDataField() { return *GetNativePointerField<int*>(this, "FInterpEdInputData.InputData"); }
	void * TempDataField() { return GetNativePointerField<void *>(this, "FInterpEdInputData.TempData"); }
	bool& bCtrlDownField() { return *GetNativePointerField<bool*>(this, "FInterpEdInputData.bCtrlDown"); }
	bool& bAltDownField() { return *GetNativePointerField<bool*>(this, "FInterpEdInputData.bAltDown"); }
	bool& bShiftDownField() { return *GetNativePointerField<bool*>(this, "FInterpEdInputData.bShiftDown"); }
	bool& bCmdDownField() { return *GetNativePointerField<bool*>(this, "FInterpEdInputData.bCmdDown"); }
	FIntPoint& MouseStartField() { return *GetNativePointerField<FIntPoint*>(this, "FInterpEdInputData.MouseStart"); }
	FIntPoint& MouseCurrentField() { return *GetNativePointerField<FIntPoint*>(this, "FInterpEdInputData.MouseCurrent"); }
	float& PixelsPerSecField() { return *GetNativePointerField<float*>(this, "FInterpEdInputData.PixelsPerSec"); }
};

