#pragma once

#include "BaseDeclarations.h"
struct Actor_eventDrawInEditorViewport_Parms
{
	char __padding[0x30L];
	UCanvas * CanvasField() { return GetNativePointerField<UCanvas *>(this, "Actor_eventDrawInEditorViewport_Parms.Canvas"); }
	int& LHSXField() { return *GetNativePointerField<int*>(this, "Actor_eventDrawInEditorViewport_Parms.LHSX"); }
	int& InOutLHSYField() { return *GetNativePointerField<int*>(this, "Actor_eventDrawInEditorViewport_Parms.InOutLHSY"); }
	int& RHSXField() { return *GetNativePointerField<int*>(this, "Actor_eventDrawInEditorViewport_Parms.RHSX"); }
	int& InOutRHSYField() { return *GetNativePointerField<int*>(this, "Actor_eventDrawInEditorViewport_Parms.InOutRHSY"); }
	FVector& ViewLocationField() { return *GetNativePointerField<FVector*>(this, "Actor_eventDrawInEditorViewport_Parms.ViewLocation"); }
	FRotator& ViewRotationField() { return *GetNativePointerField<FRotator*>(this, "Actor_eventDrawInEditorViewport_Parms.ViewRotation"); }
};

