#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerPaint_Parms
{
	char __padding[0x20L];
	TArray<FPaintItem>& PaintsField() { return *GetNativePointerField<TArray<FPaintItem>*>(this, "ShooterPlayerController_eventServerPaint_Parms.Paints"); }
	bool& bLastBatchField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerPaint_Parms.bLastBatch"); }
	bool& bFromLoadFileField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerPaint_Parms.bFromLoadFile"); }
};

