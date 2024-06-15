#pragma once

#include "BaseDeclarations.h"
struct StructurePaintingComponent_eventClientPaint_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * PainterField() { return GetNativePointerField<AShooterPlayerController *>(this, "StructurePaintingComponent_eventClientPaint_Parms.Painter"); }
	TArray<FPaintItem>& PaintsField() { return *GetNativePointerField<TArray<FPaintItem>*>(this, "StructurePaintingComponent_eventClientPaint_Parms.Paints"); }
};

