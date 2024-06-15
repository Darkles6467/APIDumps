#pragma once

#include "BaseDeclarations.h"
struct FCameraPreviewInfo
{
	char __padding[0x30L];
	UAnimSequence * AnimSeqField() { return GetNativePointerField<UAnimSequence *>(this, "FCameraPreviewInfo.AnimSeq"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FCameraPreviewInfo.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FCameraPreviewInfo.Rotation"); }

	// Functions

};

