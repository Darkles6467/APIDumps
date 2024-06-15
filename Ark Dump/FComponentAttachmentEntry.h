#pragma once

#include "BaseDeclarations.h"
struct FComponentAttachmentEntry
{
	char __padding[0x20L];
	FVector& ComponentLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "FComponentAttachmentEntry.ComponentLocationOffset"); }
	FRotator& ComponentRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "FComponentAttachmentEntry.ComponentRotationOffset"); }

	// Functions

};

